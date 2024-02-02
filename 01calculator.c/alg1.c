#include <stdio.h>
#include <string.h>

int main(void)
{
	// Define an array of numbers
	int numbers[] = {4, 6, 8, 2, 7, 5, 0};
	
	// Iterate through the array
	for (int i = 0; i < 7; i++)
	{
		// Check if the current number is -1
		if (numbers[i] == -1)
		{
			// If -1 is found, print "Found" and return 0
			printf("Found\n");
			return (0);
		}
	}
	
	// If -1 is not found, print "Not found" and return 1
	printf("Not found\n");
	return (1);
}
