from vpython import *
import numpy as np
from scipy.integrate import odeint
import imageio
import os

# Constants
g = 9.81  # acceleration due to gravity
k = 8.99e9  # Coulomb's constant

# User-defined parameters
L1 = float(input("Enter length of pendulum 1 (m): "))
L2 = float(input("Enter length of pendulum 2 (m): "))
m1 = float(input("Enter mass of pendulum 1 (kg): "))
m2 = float(input("Enter mass of pendulum 2 (kg): "))
q1 = float(input("Enter charge of pendulum 1 (C): "))
q2 = float(input("Enter charge of pendulum 2 (C): "))
theta1_0 = float(input("Enter initial angle of pendulum 1 (degrees): "))
theta2_0 = float(input("Enter initial angle of pendulum 2 (degrees): "))
b = float(input("Enter damping coefficient: "))

# Initial conditions
theta1_0 = np.radians(theta1_0)
theta2_0 = np.radians(theta2_0)
dtheta1_0 = 0
dtheta2_0 = 0

# Time parameters
t_max = 60  # simulation time
dt = 1/60  # time step
t = np.arange(0, t_max, dt)

# Colors
color1 = vector(1, 0, 0)  # red
color2 = vector(0, 1, 0)  # green

# Create the scene
scene = canvas(title='Double Pendulum with Charged Masses', width=800, height=600, background=vector(0, 0, 0))

# Create the pendulum bobs
bob1 = sphere(pos=vector(L1*np.sin(theta1_0), -L1*np.cos(theta1_0), 0), radius=0.1, color=color1, make_trail=True)
bob2 = sphere(pos=vector(L1*np.sin(theta1_0) + L2*np.sin(theta2_0), 
                        -L1*np.cos(theta1_0) - L2*np.cos(theta2_0), 0),
              radius=0.1, color=color2, make_trail=True)

# Create the electric field line
field_line = arrow(pos=bob1.pos, axis=bob2.pos - bob1.pos, shaftwidth=0.01, color=color2)

# Create the labels
label1 = label(pos=vector(0, 0.5, 0), text='Total Energy: ', box=False, height=20)
label2 = label(pos=vector(0, 0.3, 0), text='Angle 1: ', box=False, height=20)
label3 = label(pos=vector(0, 0.1, 0), text='Angle 2: ', box=False, height=20)
label4 = label(pos=vector(0, -0.1, 0), text='Time Elapsed: ', box=False, height=20)

# Define the equations of motion
def equations_of_motion(state, t):
    theta1, dtheta1, theta2, dtheta2 = state
    
    # Correct displacement vector between bobs
    r_x = L2 * np.sin(theta2)
    r_y = -L2 * np.cos(theta2)
    r = np.array([r_x, r_y])
    r_mag = np.linalg.norm(r)
    
    # Electric force components
    F_electric = (k * q1 * q2 * r) / (r_mag**3) if r_mag != 0 else np.zeros(2)
    
    # Torque terms for each pendulum
    torque1 = -m1 * g * L1 * np.sin(theta1)  # Gravity torque on first bob
    torque1 += (k * q1 * q2 * L1 * np.sin(theta2 - theta1)) / L2  # Electric torque contribution
    torque1 -= b * dtheta1 * L1  # Damping torque
    
    torque2 = -m2 * g * L2 * np.sin(theta2)  # Gravity torque on second bob
    torque2 += (k * q2 * q1 * L2 * np.sin(theta2 - theta1)) / L1  # Electric torque contribution (opposite direction)
    torque2 -= b * dtheta2 * L2  # Damping torque
    
    # Angular accelerations (divided by moment of inertia)
    a1 = torque1 / (m1 * L1**2)
    a2 = torque2 / (m2 * L2**2)
    
    return [dtheta1, a1, dtheta2, a2]

# Solve the equations of motion
state0 = [theta1_0, dtheta1_0, theta2_0, dtheta2_0]
solution = odeint(equations_of_motion, state0, t)

# Animation and collision handling
frames = []  # To store frames for video
boundary_y = -5.0  # Fixed boundary at y = -5.0

for i in range(len(t)):
    theta1, dtheta1, theta2, dtheta2 = solution[i]
    
    # Update positions
    bob1.pos = vector(L1 * np.sin(theta1), -L1 * np.cos(theta1), 0)
    bob2.pos = vector(
        bob1.pos.x + L2 * np.sin(theta2),
        bob1.pos.y - L2 * np.cos(theta2),
        0
    )
    
    # Collision detection with boundary (y-axis)
    if bob1.pos.y < boundary_y:
        dtheta1 *= -0.8  # Reverse angular velocity with damping
    if bob2.pos.y < boundary_y:
        dtheta2 *= -0.8
    
    # Update electric field line
    field_line.pos = bob1.pos
    field_line.axis = bob2.pos - bob1.pos
    
    # Update labels
    # Compute energy terms
    ke1 = 0.5 * m1 * (L1 * dtheta1)**2
    ke2 = 0.5 * m2 * (L2 * dtheta2)**2
    pe_grav = m1 * g * L1 * np.cos(theta1) + m2 * g * (L1 * np.cos(theta1) + L2 * np.cos(theta2))
    pe_electric = (k * q1 * q2) / (L2)  # Since distance is fixed at L2
    total_energy = ke1 + ke2 + pe_grav + pe_electric
    
    label1.text = f'Total Energy: {total_energy:.2f} J'
    label2.text = f'Angle 1: {np.degrees(theta1):.2f}°'
    label3.text = f'Angle 2: {np.degrees(theta2):.2f}°'
    label4.text = f'Time Elapsed: {t[i]:.2f}s'
    
    # Capture frame
    img = scene.screenshot()
    frames.append(img)
    rate(60)

# Save the video using imageio
os.makedirs('frames', exist_ok=True)
imageio.mimsave('double_pendulum_video.mp4', frames, fps=60)