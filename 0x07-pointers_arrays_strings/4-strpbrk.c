#include "main.h"
/**
 * _strpbrk - A function that searches a string for any of a set of bytes.
 * @s: Function parameter
 * @accept: Function parameter
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept.
 *
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *ptr;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				ptr = &s[i];
				return (ptr);
			}
		}
	}
	return (0);
}
