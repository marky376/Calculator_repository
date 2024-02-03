#include <stdio.h>

int main()
{
	// Declare variables to store the numbers and the sum
	double num1, num2, sum;

	// Prompt the user to enter two numbers
	printf("Enter two numbers: ");

	// Read the input numbers from the user
	scanf("%lf %lf", &num1, &num2);

	// Calculate the sum of the two numbers
	sum = num1 + num2;

	// Display the sum to the user
	printf("The sum is: %.2lf", sum);

	// Return 0 to indicate successful execution of the program
	return 0;
}
