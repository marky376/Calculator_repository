#include <stdio.h>

int main()
{
	// Declare variables
	double num1, num2, num3, max;	

	// Prompt the user to enter three different numbers
	printf("Write three different numbers: ");
	scanf("%lf %lf %lf", &num1, &num2, &num3);

	// Find the maximum number using ternary operator
	max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

	// Print the maximum number
	printf("The maximum number in the lot is: %.2lf", max);

	return 0;
}
