from vpython import *
import numpy as np
from scipy.integrate import odeint

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
bob2 = sphere(pos=vector(L1*np.sin(theta1_0) + L2*np.sin(theta2_0), -L1*np.cos(theta1_0) - L2*np.cos(theta2_0), 0), radius=0.1, color=color2, make_trail=True)

# Create the electric field lines
field_line = arrow(pos=bob1.pos, axis=bob2.pos - bob1.pos, shaftwidth=0.01, color=color2)

# Create the labels
label1 = label(pos=vector(0, 0.5, 0), text='Total Energy: ', box=False, height=20)
label2 = label(pos=vector(0, 0.3, 0), text='Angle 1: ', box=False, height=20)
label3 = label(pos=vector(0, 0.1, 0), text='Angle 2: ', box=False, height=20)
label4 = label(pos=vector(0, -0.1, 0), text='Time Elapsed: ', box=False, height=20)

# Define the equations of motion
def equations_of_motion(state, t):
    theta1, dtheta1, theta2, dtheta2 = state
    
    # Calculate the electric force
    r = L2 * np.array([np.sin(theta2) - np.sin(theta1), np.cos(theta1) - np.cos(theta2)])
    F_electric = k * q1 * q2 * r / np.linalg.norm(r)**3
    
    # Calculate the accelerations
    a1 = (-g * np.sin(theta1) - b * dtheta1 + F_electric[0] / m1) / L1
    a2 = (-g * np.sin(theta2) - b * dtheta2 + F_electric[1] / m2) / L2
    
    return [dtheta1, a1, dtheta2, a2]

# Solve the equations of motion
state0 = [theta1_0, dtheta1_0, theta2_0, dtheta2_0]
solution = odeint(equations_of_motion, state0, t)

# Animate the simulation
for i in range(len(t)):
    theta1, dtheta1, theta2, dtheta2 = solution[i]
    
    # Update the positions of the bobs
    bob1.pos = vector(L1*np.sin(theta1), -L1*np.cos(theta1), 0)
    bob2.pos = vector(L1*np.sin(theta1) + L2*np.sin(theta2), -L1*np.cos(theta1) - L2*np.cos(theta2), 0)
    
    # Update the electric field line
    field_line.pos = bob1.pos
    field_line.axis = bob2.pos - bob1.pos
    
    # Update the labels
    label1.text = 'Total Energy: {:.2f} J'.format(0.5*m1*L1**2*dtheta1**2 + 0.5*m2*L2**2*dtheta2**2 + m1*g*L1*np.cos(theta1) + m2*g*L2*np.cos(theta2) + k*q1*q2/np.linalg.norm(bob2.pos - bob1.pos))
    label2.text = 'Angle 1: {:.2f} degrees'.format(np.degrees(theta1))
    label3.text = 'Angle 2: {:.2f} degrees'.format(np.degrees(theta2))
    label4.text = 'Time Elapsed: {:.2f} s'.format(t[i])
    
    # Save the simulation as a video
    rate(60)

# Save the simulation as a video
video_capture = scene.waitfor('click')
video_capture.capture('double_pendulum_video.mp4')