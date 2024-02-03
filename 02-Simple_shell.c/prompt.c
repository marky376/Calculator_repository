#include "shell.h"

int main(void)
{
	char command[1024];

	while (1)
	{
		display_prompt(); // Display the shell prompt
		user_input(command, sizeof(command)); // Get user input
		execute_commands(command); // Execute the user's command
	}

	return (0);
}
