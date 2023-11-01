#include "shell.h"
void read_commands(char *command, size_t size)
/*{
	size_t len;

	if (fgets(command, size, stdin) == NULL)
	{
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

	len = strcspn(command, "\n");


	if (len < size)
	{
		command[len] = '\0';
	}

	else
	{
		markm_print("Input too long.\n");
		exit(EXIT_FAILURE);
	}

}*/
{
	read_commands(command, size);
}
