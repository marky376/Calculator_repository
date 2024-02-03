#include <stdio.h>

int main()
{
	int w;

	// Prompt the user to enter a year
	printf("Please enter the year you wish to check: ");
	scanf("%d", &w);

	// Check if the year is divisible by 4
	if (w % 4 == 0)
	{
		// If divisible by 4, it may be a leap year
		printf("The year %d you entered is a leap year!", w);
	}
	else
	{
		// If not divisible by 4, it is not a leap year
		printf("The year %d you entered is not a leap year!", w);
	}

	return 0;
}
