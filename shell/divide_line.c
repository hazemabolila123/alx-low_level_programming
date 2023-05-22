#include "shell.h"

/**
 * divide_line - A function that divide the command line into
 * commands an store them in an array
 * @str: The command line to be split
 * @delim: special char to split the line according to
 *
 * Return: Array of commands
 */
char **divide_line(char *str)
{
	char **commands_arr, *token;
	int i = 0, j = 0;
	char *delim = " ";

	commands_arr = malloc(sizeof(char *) * 20);
	if (commands_arr == NULL)
	{
		perror("Memory Allocation Error");
		exit(EXIT_FAILURE);
	}
	while (str[i])
	{
		if (str[i] == '\n')
			str[i] = '\0';
		i++;
	}
	token = strtok(str, delim);
	while (token != NULL)
	{
		commands_arr[j] = token;
		j++;
		token = strtok(NULL, delim);
	}
	commands_arr[j] = NULL;
	return (commands_arr);
}
