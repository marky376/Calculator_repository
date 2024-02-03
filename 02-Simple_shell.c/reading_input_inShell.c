#include "shell.h"

void user_input(char *prompt, char *input, size_t size)
{
	markm_print("%s", prompt);

	if (fgets(input, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			markm_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			markm_print("Error while reading input.\n");
			exit(EXIT_FAILURE);
		}
	}
	input[strcspn(input, "\n")] = '\0';
}
// This code defines a function named user_input that reads user input from the standard input (stdin).
// The function takes three parameters: a prompt message, a character array to store the input, and the size of the array.

#include "shell.h" // Include the header file "shell.h" which contains the necessary function prototypes and definitions.

void user_input(char *prompt, char *input, size_t size)
{
	markm_print("%s", prompt); // Print the prompt message to the console using the markm_print function.

	if (fgets(input, size, stdin) == NULL) // Read input from the user using fgets and check if it returns NULL.
	{
		if (feof(stdin)) // If fgets returns NULL due to end-of-file (EOF) being reached, exit the program successfully.
		{
			markm_print("\n"); // Print a new line character.
			exit(EXIT_SUCCESS); // Exit the program with a success status code.
		}
		else // If fgets returns NULL due to an error, print an error message and exit the program with a failure status code.
		{
			markm_print("Error while reading input.\n");
			exit(EXIT_FAILURE);
		}
	}
	input[strcspn(input, "\n")] = '\0'; // Remove the trailing newline character from the input string.
}
