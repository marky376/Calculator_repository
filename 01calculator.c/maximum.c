#include <stdio.h>

int main()
{
	double num1, num2, num3, max;	

	printf("Write three different numbers: ");
	scanf("%lf %lf %lf", &num1, &num2, &num3);


	max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

	printf("The maximum number in the lot is: %.2lf", max);

	return 0;
}
