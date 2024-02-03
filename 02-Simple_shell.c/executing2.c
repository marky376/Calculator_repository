/**
 * Executes the given command by forking a child process and using execvp to execute the command.
 * 
 * @param command The command to be executed.
 */
void execute_commands(const char *command/* __attribute__((unused)*/)
{
	pid_t child_pid = fork();
	int status, arg_count = 0;
	char *tokn, *args[20];

	// Tokenize the command into individual arguments
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
		// Execute the command in the child process
		if (execvp(args[0], args) == -1)
		{
			perror("execvp failed");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		markm_print("Parent process: PID = %d\n", getpid());

		// Wait for the child process to finish
		wait(&status);

		markm_print("Child process has finished\n");
	}
}
