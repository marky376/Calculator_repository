#include <stdio.h>

int main(void)
{
	int a; // variable to store the length of a square

	printf("Enter the value of the length of a square: ");
	scanf("%d", &a); // read the length from the user

	printf("The area of the given square is: %d", a * a); // calculate and print the area

	return (0);
}
