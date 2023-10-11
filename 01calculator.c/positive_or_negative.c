#include <stdio.h>

/** main - main function to determine whether a number is -ve or +ve
 * Return: always 0
 */

int main(void)
{

	double number;

	printf("Enter any number: ");
	scanf("%le", &number);

	if (number < 0)
	{
		printf("The number entered %f is a negative number\n", number);
	}
	else if (number > 0)
	{
		printf("The number entered %f is a positive number\n", number);
	}
	else if (number == 0)
	{
		printf("The number you entered is zero\n");
	}
	else 
	{
		printf("Please enter a real number in the space provided: ");
		scanf("%le", &number);
	}

	return (0);
}

