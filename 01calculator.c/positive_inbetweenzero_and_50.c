#include <stdio.h>

int main(void)
{
	int i;

	for (i = 0; i <= 50; i++) // Iterate from 0 to 50 (inclusive)
	{
		if (i % 2 == 0) // Check if the number is even
		{
			printf("%d", i); // Print the even number
		}
				
	}

	return 0;
}
