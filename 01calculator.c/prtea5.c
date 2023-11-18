#include <stdio.h>

int main()
{
	int j, m, row, i;
	char h = '*';

	row = 4;

	for (j = 1; j <= row; j++)
	{
		for (m = 1; m <= row - j; m++)
		{
			printf(" ");
		}
		for (i = 1; i <= 2 * j - 1; i++)
		{
			printf("%c", '*');
		}
		printf("\n");
	}

	return 0;
}
