#include <string.h>
#include <stdio.h>

int main(void)
{	
	// Declare a character array and initialize it with the string "John"
	char name[] = "John";
	
	// Call the strlen() function from the string.h library to get the length of the string
	int length = strlen(name);

	// Print the length of the string to the console
	printf("The length of a string is: %d\n", length);

	return 0;
}
