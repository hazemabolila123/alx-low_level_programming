#include "shell.h"

/**
 * is_builtin - A function that check if the passed parameter is a
 * built in command
 * @commands: Array of strings
 *
 * Return: 0 if it fails otherwise a pointer to the function will be run
 */
size_t is_builtin(char **commands)
{
	int i = 0;

	eniv_t compare[] = {
		{"exit", my_exit},
		{NULL, NULL},
	};

	while (compare[i].command)
	{
		if (_strcmp(compare[i].command, commands[0]) == 0)
			return (compare[i].fp(commands));
		i++;
	}
	return (0);
}


size_t my_exit(char **commands)
{
	if (!commands[1])
		exit(0);
	else
		{
			if (_atoi(commands[1]) >= 0)
				exit(_atoi(commands[1]));
			else
				return (0);
		}
	return (0);
}


