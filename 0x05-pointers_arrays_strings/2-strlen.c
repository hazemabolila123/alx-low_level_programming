#include "main.h"
/**
 * _strlen - A function that returns the length of a string
 * @s: Function parameter
 * Return: Length of a string
 *
 */
int _strlen(char *s)
{
	int i, cnt = 0;

	for (i = 0; s[i] != '\0'; i++)
		cnt++;

	return (cnt);
}
