#include <stdio.h>

/**
 * This program prints a pattern of asterisks in a square shape.
 * The size of the square is determined by the value of 'n'.
 */
int main()
{
	int n, row, col;
	char t = '*';

	n = 6;

	for (col = 1; col <= n; col++)
	{
		for (row = 1; row <= n; row++)
		{
			printf("%c", '*');
			t++;
		}
		printf("\n");
	}

	return 0;
}
