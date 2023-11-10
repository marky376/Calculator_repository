#include <stdio.h>

int main(void)
{
	int n, m, j;

	n = 0;
	m = 10;

	do
	{
		j = n * m;
		n++;
		printf("%d\n", j);

	}while (j < 100);
	return 0;
}
