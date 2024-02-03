#include <stdio.h>

int main()
{
	/* Variable declarations on the necessary variables to be used in the program */
	int rem, num1, num2, gcd, big, small;

	/* Giving user prompt to enter two values */
	printf("Please enter any two positive values: ");
	scanf("%d %d", &num1, &num2);

	/* Here we check which of the two numbers are greater than the other */
	if (num1 > num2)
	{
		big = num1;
		small = num2;
	}
	else
	{
		big = num2;
		small = num1;
	}

	rem = big / small; /* determining whether the remainder is the same or not */

	/* If the remainder is not equal to 0 we now determine the GCD */
	while (rem != 0)
	{
		big = small;
		small = rem;
		rem = big % small;
	}

	gcd = small;
	printf("The GCD of %d and %d is: %d", num1, num2, gcd);

	return 0;
}
