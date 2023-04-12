#include "main.h"
#include <stdlib.h>
/**
 * _strdup - A function that returns a pointer
 * to a newly allocated space in memory.
 * @str: Function parameter
 *
 * Return: a pointer to a newly allocated space in memory.
 *
 */
char *_strdup(char *str)
{
	int i, size = 0;
	char *ptr;

	for (i = 0; str[i] != '\0'; i++)
		size++;

	ptr = (char *) malloc(sizeof(char) * size + 1);

	if (str == NULL || ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = str[i];

	return (ptr);
}
