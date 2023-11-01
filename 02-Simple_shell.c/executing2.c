#include "shell.h"
#include <sys/wait.h>


void execute_commands(const char *command/* __attribute__((unused)*/)
{
	pid_t child_pid = fork();
	int status, arg_count = 0;
	char *tokn, *args[20];

	tokn = strtok((char *)command, " ");
	while (tokn != NULL)
	{
		args[arg_count++] = tokn;
		tokn = strtok(NULL, " ");
	}
	args[arg_count] = NULL;

	child_pid = fork();


	if (child_pid == -1)
	{
		markm_print("Error forking process.\n");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		if (execvp(args[0], args) == -1)
		{
			perror("execvp failed");
			exit(EXIT_FAILURE);

	}
	else
	{
		markm_print("Parent process: PID = %d\n", getpid());

		wait(&status);

		markm_print("Child process has finished\n");
	}
}
