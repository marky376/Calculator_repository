#include <stdio.h>

int main()
{
	int col, k, row, m;
	char j = '*';

	row = 6;
	col = 6;

	for (m = 1; m <= row; m++)
	{
		for (k = 1; k <= col; k++)
		{
			if (m == 1 || m == row || k == 1 || k == col)
			{
				printf("%c", '*');
			}
			else
			{
				printf(" ");
			}
		}printf("\n");
	}

	return 0;

}
