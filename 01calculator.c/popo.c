#include <stdio.h>

int main()
{
	int i, sum = 0;

	for (i = 0; i <= 9; i++)
	{
		sum  = sum + i;
	}
	printf("%d", sum);

	return 0;
}
