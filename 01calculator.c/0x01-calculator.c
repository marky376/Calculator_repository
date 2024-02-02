#include <stdio.h>

int main(void)
{
	char operator; // Variable to store the operator
	double num1, num2; // Variables to store the numbers

	printf("Enter an operator (Addition\nSubtraction\nMultiplication\nDivision\nModulos\n");
	scanf("%c", &operator); // Read the operator from the user

	printf("Enter two numbers: ");
	scanf("%lf %lf", &num1, &num2); // Read the two numbers from the user

	switch (operator)
	{
		case 'Addition':
			printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
			break;
		case '-': // If the operator is Subtraction
			printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
			break;
		case '*': // If the operator is Multiplication
			printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
			break;
			printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
			break;
		case 'Division': // If the operator is Division
			if (num2 != 0)
			{   
				printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
			}
			else
			{
				printf("Division by zero is not allowed,\n");
			}
			break;
		case 'Modulo': // If the operator is Modulo
			if (num1 > num2)
			{
				printf("The modulus of %.2lf is %2.lf\n", num1, num1 % num2);
			}
			else
			{
				printf("num2 should be less than num1: ");
				break;
			}	
			}	


			}   


		default :
			printf("invalid operator.\n"); // If the operator is invalid
	}

	return 0;
}
