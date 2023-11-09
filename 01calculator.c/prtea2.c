#include <stdio.h>

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
