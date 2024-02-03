#include <stdio.h>

int main()
{
	int i;

	printf("Enter a number: "); // Prompt the user to enter a number
	scanf("%d", &i); // Read the input number from the user

	if (i % 2 == 0) // Check if the number is even
	{
		printf("Even number\n"); // Print "Even number" if the number is even
	}
	else
	{
		printf("Odd number\n"); // Print "Odd number" if the number is odd
	}

	return (0);
}
