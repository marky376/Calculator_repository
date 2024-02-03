#include <stdio.h>
#include <string.h>

/*
int main(void)
{
	FILE* fptr;

	fptr = fopen("fptr.txt", "w");

	fprintf(fptr, "C is a fun programming language\n");
	fprintf(fptr, "And i love using the C language");

	fclose(fptr);

	return (0);
}*/

int main(void)
{
	FILE* fptr; // File pointer to handle file operations
	char print[1000]; // Buffer to store each line of the file

	fptr = fopen("fptr.txt", "r"); // Open the file in read mode

	if (fptr != NULL) // Check if the file was opened successfully
	{
		while (fgets(print, sizeof(print), fptr) != NULL) // Read each line of the file
			printf("%s", print); // Print the line

		fclose(fptr); // Close the file
	}
	else
	{
		printf("Error reading the input in the given file!"); // Print an error message if the file cannot be opened
	}

	return (0);
}
