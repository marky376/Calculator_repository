#include <stdio.h>

int main()
{
	int n;

	printf("Enter marks: ");
	scanf("%d", &n);

	if (n >= 70) // If the marks are greater than or equal to 70
	{
		printf("This is a success\n");
	}
	else if (n >= 60) // If the marks are greater than or equal to 60
	{
		printf("This is above average\n");
	}
	else if (n >= 50) // If the marks are greater than or equal to 50
	{
		printf("This is an average result\n");
	}
	else if (n >= 40) // If the marks are greater than or equal to 40
	{
		printf("This is a satisfactory result\n");
	}
	else // If the marks are less than 40
	{
		printf("This is a PASS\n");
	}
	return 0;
}
