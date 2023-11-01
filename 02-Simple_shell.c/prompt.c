#include "shell.h"

int main(void)
{
	char command[1024];

	while (1)
	{
		display_prompt();
		user_input(command, sizeof(command));
		execute_command(command);
	}

	return (0);
}
