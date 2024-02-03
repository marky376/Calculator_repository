#include <stdio.h>

int main()
{
	char h = 'a';

	while (h <= 'z') // Loop through all lowercase letters
	{
		printf("%c", h); // Print the current letter
		h++; // Increment the letter
	}
	printf("\n");

	return 0;
}
