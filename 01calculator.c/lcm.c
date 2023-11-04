#include <stdio.h>

int main()
{
	/*Declaration of local variables*/
	int num1, num2, max;

	/* Prompts user to input two positive numbers*/
	printf("Please enter two positive numbers: ");
	scanf("%d %d", &num1, &num2);

	/*Determining the maximum value of the two numbers*/
	max = (num1 > num2) ? num1 : num2;

	/*If a maximum number is found the lcm is found by termining whwther the max % num1 or num2 is 0*/
	while (1)
	{
		if ((max % num1 == 0) && (max % num2 == 0))
		{
			printf("The LCM of %d and %d is: %d", num1, num2, max);
		}
		else
		{
			max = (num1 * num2);
			printf("The LCM of %d and %d is: %d", num1, num2, max);
			break;/*Important to break or else get an infinite loop*/
		}
		max++;
	}

	return 0;
}
