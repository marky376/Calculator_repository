#include <stdio.h>

int main()
{
	int n, row, col;

	char t = '*';

	n = 6;
	for (row = 1; row <= n; row++)
	{
		for (col = 1; col <= row; col++)
		{
			printf("%c", '*');
			t++;
		}
		printf("\n");
	}

	return 0;
}
