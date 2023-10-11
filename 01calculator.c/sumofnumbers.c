#include <stdio.h>

int main()
{
	double num1, num2, sum;

	printf("Enter two numbers: ");
	scanf("%lf %lf", &num1, &num2);

	sum = num1 + num2;

	printf("The sum is: %.2lf", sum);

	return 0;
}
