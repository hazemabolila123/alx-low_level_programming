#include "main.h"
/**
 * _strlen - A function that returns the length of a string
 * @s: Function parameter
 * Return: Length of a string
 *
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
