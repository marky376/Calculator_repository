#include <stdio.h>

int main()
{
	int j, m, row, i;
	char h = '*';

	row = 4;

	for (j = 1; j <= row; j++) // loop for each row
	{
		for (m = 1; m <= row - j; m++) // loop for printing spaces
		{
			printf(" ");
		}
		for (i = 1; i <= 2 * j - 1; i++) // loop for printing asterisks
		{
			printf("%c", '*');
		}
		printf("\n"); // move to the next line after each row
	}

	return 0;
}
