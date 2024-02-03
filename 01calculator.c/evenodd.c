#include <stdio.h>

int main(void)
{
	int n;

	// Prompt the user to enter a number
	printf("Enter any number: ");
	scanf("%d", &n);

	// Validate that the number is greater than zero
	while (n < 0)
	{
		printf("Please enter a number that is greater than 0 (zero): ");
		scanf("%d", &n);
	}

	// Check if the number is even or odd and display the result
	if (n % 2 == 0)
		printf("%d is even", n);
	else
		printf("%d is odd", n);

	return 0;
}
