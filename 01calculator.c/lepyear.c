#include <stdio.h>

int main()
{
	int w;

	printf("Please enter the year you wish to enter: ");
	scanf("%d", &w);

	if (w / 4)
	{
		printf("The year %d you entered is a leap year!", w);
	}
	else
	{
		printf("The year %d you entered is not a leap year!", w);
	}
	return 0;
}
