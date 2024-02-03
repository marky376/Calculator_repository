#include <stdio.h>

int main()
{
	int n, row, col;

	char t = '*'; // Initialize a character variable t with '*'

	n = 6; // Set the value of n to 6
	for (row = 1; row <= n; row++) // Loop through each row from 1 to n
	{
		for (col = 1; col <= row; col++) // Loop through each column from 1 to row
		{
			printf("%c", '*'); // Print the character '*'
			t++; // Increment the value of t
		}
		printf("\n"); // Print a new line after each row
	}

	return 0;
}
