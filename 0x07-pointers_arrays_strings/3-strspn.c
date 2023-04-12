#include "main.h"
/**
 * _strspn - A function that gets the length of a prefix substring.
 * @s: Function parameter
 * @accept: Function parameter
 *
 * Return: integer
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] != accept[j]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
