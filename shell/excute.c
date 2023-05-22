#include "shell.h"

/**
 * execute_process - A function that excute the command process
 * @commands_arr: Array of commands
 * @argv: Argument variables
 * @env: Environment variables
 */
void execute_process(char **commands_arr, char **argv, char *env[])
{
	pid_t child_pid;
	int status;

	char *error_message = _strcat(argv[0], ": No such file or directory\n");

	child_pid = fork();
	if (child_pid < 0)
	{
		perror("Error: Fork issue");
		return;
	}
	if (child_pid == 0)
	{
		if (execve(commands_arr[0], commands_arr, env) == -1)
			write(STDERR_FILENO, error_message, _strlen(error_message));
	}
	else
		wait(&status);
}
