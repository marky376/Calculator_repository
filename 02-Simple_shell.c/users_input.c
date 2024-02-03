#include "shell.h"

void read_commands(char *command, size_t size)
{
	// Read user input from stdin
	if (fgets(command, size, stdin) == NULL)
	{
		// Check if end of file is reached
		if (feof(stdin))
		{
			markm_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			markm_print("Error while reading input.\n");
			exit(EXIT_SUCCESS);
		}
	}

	// Remove the newline character from the command
	size_t len = strcspn(command, "\n");
	if (len < size)
	{
		command[len] = '\0';
	}
	else
	{
		markm_print("Input too long.\n");
		exit(EXIT_FAILURE);
	}
}

// Call the read_commands function with the provided arguments
read_commands(command, size);
