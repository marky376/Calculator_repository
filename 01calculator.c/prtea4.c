#include <stdio.h>

int main()
{
	int m, b, row, col, k;
	char h = '*';

	row = 4; // Number of rows in the pattern
	col = 4; // Number of columns in the pattern

	for (m = 1; m <= row; m++) // Loop for each row
	{
		for (b = 1; b <= row - m; b++) // Loop for printing spaces before the pattern
		{
			printf(" ");
		}
		for (k = 1; k <= 2 * m - 1; k++) // Loop for printing the pattern
		{
			printf("%c", '*');
		}
		printf("\n"); // Move to the next line after printing each row
	}
	
	return 0;
}
