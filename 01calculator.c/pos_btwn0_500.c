#include <stdio.h>

int main(void)
{
	int n;

	for (n = 0; n <= 500; n +=2) // Iterate from 0 to 500 in steps of 2
	{
		printf("%d", n); // Print the current value of n
	}
	return 0;
}
