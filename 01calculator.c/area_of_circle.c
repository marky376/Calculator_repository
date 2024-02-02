#include <stdio.h>

/**
 * Calculates the area of a circle.
 * 
 * This program prompts the user to enter the radius of a circle,
 * then calculates and prints the area of the circle using the formula:
 * area = pi * radius * radius.
 * 
 * @return 0 indicating successful execution of the program.
 */
int main(void)
{
	int radius;
	float pi;

	pi = 3.142;

	printf("Enter the radius of the circle: ");
	scanf("%d", &radius);

	printf("The area of the given circle is: %f", pi * radius * radius);
	return 0;
}
