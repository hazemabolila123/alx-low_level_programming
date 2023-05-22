#include "shell.h"

/**
 * check_path - A function that checks if the path is valid or not
 * @path: The path to be checked
 *
 * Return: 0 if the path is not valid otherwise it returns 1
 */
int check_path(char *path)
{
	char *cmp = "/bin/", *ptr, *cpath;

	int i = 0, j = 0;
	ptr = malloc(sizeof(char) * 20);

	if (ptr == NULL)
	{
		free(ptr);
		return (0);
	}
	while (cmp[i] != '\0')
	{
		if (cmp[i] != path[i])
		{
			free(ptr);
			return (0);
		}
		i++;
	}
	while (path[i] != '\0')
	{
		ptr[j] = path[i];
		i++;
		j++;
	}
	ptr[j] = '\0';
	cpath = create_path(ptr);
	if (cpath != NULL)
	{
		free(ptr);
		return (1);
	}
	return (0);
}

