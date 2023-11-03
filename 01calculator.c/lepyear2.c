#include <stdio.h>

int main()
{
	int w;

	printf("Please enter any year: ");
	scanf("%d", &w);

	if (w % 4 == 0)
	{
		printf("The year entered is a leap year!");
	}
	else
	{
		printf("The year you entered is not a leap year!");
	}
	return 0;
}
