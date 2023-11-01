#include "shell.h"
#include <sys/wait.h>


void execute_command(const char *command __attribute__((unused)))
{
	pid_t child_pid = fork();
	int status;

	if (child_pid == -1)
	{
		markm_print("Error forking process.\n");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		execl("/bin/ls", "ls", "-l", NULL);

		perror("exec failed");
		exit(EXIT_FAILURE);
	}
	else
	{
		markm_print("Parent process: PID = %d\n", getpid());

		wait(&status);

		markm_print("Child process has finished\n");
	}
}
