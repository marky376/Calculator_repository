#include <stdio.h>

int main()
{
	int i, sum = 0;

	for (i = 0; i <= 9; i++) // Loop from 0 to 9
	{
		sum  = sum + i; // Add current value of i to sum
	}
	printf("%d", sum); // Print the sum

	return 0;
}
