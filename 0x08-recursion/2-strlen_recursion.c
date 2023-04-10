#include "main.h"
/**
 * _strlen_recursion - A function that prints length of a string
 * @s: Function parameter
 * Return: length of the string
 *
 */
int _strlen_recursion(char *s)
{
	int cnt = 0;

	if (*s != '\0')
	{
		cnt += _strlen_recursion(s + 1) + 1;
	}
	return (cnt);
}
