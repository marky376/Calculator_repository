#include <stdio.h>

/**
 * This program takes input from the user, which represents a student's marks.
 * It then uses a switch statement to determine the grade based on the input.
 * The program prints the corresponding grade based on the following ranges:
 * - 0 to 39: 'E' grade
 * - 40 to 49: 'D' grade
 * - 50 to 59: 'C' grade
 * - 60 to 69: 'B' grade
 * - 70 to 100: 'A' grade
 * If the input is not within the valid range, an error message is displayed.
 */

int main(void)
{
	int n;

	printf("Please enter the student's marks: ");
	scanf("%d", &n);

	switch(n)
	{
		case 0 ... 39:
			printf("The student has achieved an 'E' grade");
			break;
		case 40 ... 49:
			printf("The student has achieved a 'D' grade");
			break;
		case 50 ... 59:
			printf("The student has achieved a 'C' grade");
			break;
		case 60 ... 69:
			printf("The student has achieved a 'B' grade");
			break;
		case 70 ... 100:
			printf("The student has achieved an 'A' grade");
			break;
		default:
			printf("Invalid entry. Please enter a value that is between 0 to 100");
	}

	return (0);
}
