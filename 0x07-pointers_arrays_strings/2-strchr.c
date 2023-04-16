#include "main.h"
/**
 * _strchr - A function that locates a character in a string.
 * @s: Function parameter
 * @c: Function parameter
 *
 * Return: A pointer to the first occurrence of the character.
 *
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '0'; i++)
	{
		if (s[i] == c)
			break;
	}
	return (s + i);
}
