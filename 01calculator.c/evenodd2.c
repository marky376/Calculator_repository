#include <stdio.h>

// Function to check if a number is even or odd
int evenoddchecker(int n)
{
	// Validate input: ensure n is greater than zero
	while (n < 0)
	{
		printf("Please enter a number which is greater than zero(0) ");
		scanf("%d", &n);
	}
	// Validate input: ensure n is not zero
	while (n == 0)
	{
		printf("Please enter a number which is greater than zero(0) ");
		scanf("%d", &n);
	}

	// Check if n is even or odd
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

	// Call the evenoddchecker function
	check = evenoddchecker(n);

	return 0;
}
