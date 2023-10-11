#include <stdio.h>

int main()
{
	int i;

	printf("Enter a number: ");
	scanf("%d", &i);

	if (i % 2 == 0)
	{
		printf("Even number\n");
	}
	else
	{
		printf("Odd number\n");
	}

	return (0);
}
