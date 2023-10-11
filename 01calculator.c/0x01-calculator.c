#include <stdio.h>

int main(void)
{
	char operator;
	double num1, num2;

	printf("Enter an operator (Addition\nSubtraction\nMultiplication\nDivision\nModulos\n");
	scanf("%c", &operator);

	printf("Enter two numbers: ");
	scanf("%lf %lf", &num1, &num2);

	switch (operator)
	{
		case 'Addition':
			printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
			break;
		case 'Subtraction':
			printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
			break;

		case 'Multiplication':
			printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
			break;

		case 'Division':
			if (num2 != 0)
			{	
				printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
			}
			else
			{
				printf("Division by zero is not allowed,\n");

			}
			break;
		case 'Modulo':
			if (num1 > num2)
			{
				printf("The modulus of %.2lf is %2.lf\n", num1, num1 % num2);
			}
			else
			{
				printf("num2 should be less than num1: ");
				break;
			}	


		default :
			printf("invalid operator.\n");

	}

	return 0;
}
