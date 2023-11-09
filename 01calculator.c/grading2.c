#include <stdio.h>

int main()
{
	int n;

	printf("Enter marks: ");
	scanf("%d", &n);

	if (n >= 70)
	{
		printf("This is a success\n");
	}
	else if (n >= 60)
	{
		printf("This is above average\n");
	}
	else if (n >= 50)
	{
		printf("This is an average result\n");
	}
	else if (n >= 40)
	{
		printf("This is a satisfactory result\n");
	}
	else (n < 40)
	{
		printf("This is a PASS\n");
	}
	return 0;
}
