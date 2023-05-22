#include "shell.h"

/**
 * create_path - A function that creates a path to a non_path commands
 * @command: A command that will create a path for
 *
 * Return: Path or the command or NULL if it fails
 */
char *create_path(char *command)
{
	DIR *dir = opendir("/bin/");
	struct dirent *entity;
	char *path, *tmp;

	if (!dir)
	{
		return (NULL);
	}
	entity = readdir(dir);
	while (entity)
	{
		tmp = entity->d_name;
		if (_strcmp(tmp, command) == 0)
		{
			path = _strcat("/bin/", command);
			closedir(dir);
			return (path);
		}
		entity = readdir(dir);
	}
	closedir(dir);
	return (NULL);
}
