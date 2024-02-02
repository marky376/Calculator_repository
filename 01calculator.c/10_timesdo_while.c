#include <stdio.h>

/**
 * This program calculates the multiplication of a number with 10 using a do-while loop.
 * It starts with n = 0 and continues until the result (j) is less than 100.
 * The value of j is printed after each iteration.
 */

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

	} while (j < 100);

	return 0;
}
