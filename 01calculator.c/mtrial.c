#include <stdio.h>

int main()
{
	FILE* mptr; // File pointer to handle the file
	char mp[100]; // Character array to store the contents of the file

	mptr = fopen("mptr.txt", "r"); // Open the file in read mode

	if (mptr != NULL) // Check if the file was opened successfully
	{
		while (fgets(mp, sizeof(mp), mptr) != NULL) // Read each line of the file
			printf("%s", mp); // Print the line to the console
	}
	else
	{
		printf("Error: can't read the file contents"); // Print an error message if the file cannot be opened
	}

	fclose(mptr); // Close the file

	return (0);
}
