#include <stdio.h>

int main(void)
{
	/*array of 5 rows and 2 columns*/
	int a [5] [2] = {{0,0} , {1,2} , {2,4}, {3,6}, {4,8}};
	int i, j;
	int pick = a[2][1];

	/*output each value in the 2D array*/
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 2; j++)
			printf("a [%d] [%d]: %d\n", i, j, a [i] [j]);
	}
	printf("%d\n", pick);
	return 0;
}
