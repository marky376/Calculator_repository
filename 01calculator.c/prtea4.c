#include <stdio.h>

int main()
{
	int m, b, row, col, k;
	char h = '*';

	row = 4;
	col = 4;

	for (m = 1; m <= row; m++)
	{
		for (b = 1; b <= row - m; b++)
		{
			printf(" ");
		}
		for (k = 1; k <= 2 * m - 1; k++)
		{
			printf("%c", '*');
		}
		printf("\n");
	}
	
	return 0;
}
