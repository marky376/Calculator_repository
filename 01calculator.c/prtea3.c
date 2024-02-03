#include <stdio.h>

int main()
{
	int col, k, row, m;
	char j = '*';

	row = 6;
	col = 6;

	// Loop through each row
	for (m = 1; m <= row; m++)
	{
		// Loop through each column
		for (k = 1; k <= col; k++)
		{
			// Check if it is a border element
			if (m == 1 || m == row || k == 1 || k == col)
			{
				printf("%c", '*');
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}
