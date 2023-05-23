#include "shell.h"

/**
 * main - An entry point to our shell
 * @argc: Argument count
 * @argv: Argument vector
 * @envp: Array of environment variables
 * Return: 0 if success
 */
int main(int argc, char *argv[], char *env[])
{
	char **commands_arr;
	size_t n = 0, bnum, status;
	ssize_t getreturn;
	char *lineptr = NULL, *command_path, *error_message, *fail_message;

	if (argc > 1)
	{
		error_message = _strcat("Usage: ", argv[0]);
		write(STDERR_FILENO, error_message, _strlen(error_message));
		write(STDERR_FILENO, "\n", 1);
		exit(EXIT_FAILURE);
	}
	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "$ ", 2);
		getreturn = getline(&lineptr, &n, stdin);
		if (getreturn == -1)
		{
			free(lineptr);
			exit(EXIT_FAILURE);
		}
		if (*lineptr != '\n')
		{
			commands_arr = divide_line(lineptr);
			bnum = is_builtin(commands_arr);
			fail_message = _strcat(commands_arr[0], ": command not found\n");
			command_path = create_path(commands_arr[0]);
			if (command_path)
				commands_arr[0] = command_path;
			else
				status = check_path(commands_arr[0]);
			if (status == 0 || command_path)
				execute_process(commands_arr, argv, env);
			if (status != 0 && !command_path && bnum == 0)
				write(STDERR_FILENO, fail_message, _strlen(fail_message));
		}
	}
	free(lineptr);
	free(commands_arr);
	return(0);
}
