#include <stdio.h>

int main(void)
{
	int a, b;

	// Prompt the user to enter the length of the rectangle
	printf("Enter the size of the length: ");
	scanf("%d", &a);

	// Prompt the user to enter the width of the rectangle
	printf("Enter the size of the width: ");
	scanf("%d", &b);

	// Calculate and print the area of the rectangle
	printf("The area of the rectangle is: %d", a * b);

	return (0);
}
