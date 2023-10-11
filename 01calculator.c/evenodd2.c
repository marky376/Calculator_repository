#include <stdio.h>


int evenoddchecker(int n)
{
	while (n < 0)
	{
		printf("Please enter a number which is greater than zero(0) ");
		scanf("%d", &n);
	}
	while (n == 0)
	{
		printf("Please enter a number which is greater than zero(0) ");
		scanf("%d", &n);
	}

	if (n % 2 == 0)
	{
		printf("%d is an even number", n);
	}
	else
	{
		printf("%d is an odd number", n);
	}
}


int main()
{
	int n, check;

	printf("Enter any number: ");
	scanf("%d", &n);

	check = evenoddchecker(n);

	return 0;
}

