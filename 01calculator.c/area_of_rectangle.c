#include <stdio.h>

int main(void)
{
	int a, b;

	printf("Enter the size of the length: ");
	scanf("%d", &a);

	printf("Enter the size of the width: ");
	scanf("%d", &b);

	printf("The area of the rectangle is: %d", a * b);

	return (0);
}
