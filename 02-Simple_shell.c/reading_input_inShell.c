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
