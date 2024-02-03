#include <stdio.h>

int main()
{
	int w; // variable to store the year entered by the user

	printf("Please enter any year: ");
	scanf("%d", &w); // read the year entered by the user

	if (w % 4 == 0) // check if the year is divisible by 4
	{
		printf("The year entered is a leap year!"); // if divisible by 4, it's a leap year
	}
	else
	{
		printf("The year you entered is not a leap year!"); // if not divisible by 4, it's not a leap year
	}
	return 0;
}
