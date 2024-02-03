#include <stdio.h>

int main(void)
{
	FILE* fptr; // File pointer to handle file operations
	fptr = (fopen("mark.txt", "w")); // Open the file "mark.txt" in write mode
	
	fprintf(fptr ,"please be happy that you've gone this far in your life.\n"); // Write a line to the file
	fprintf(fptr ,"And have some faith in you as well.\n"); // Write another line to the file

	fclose(fptr); // Close the file

	return (0);	
}
