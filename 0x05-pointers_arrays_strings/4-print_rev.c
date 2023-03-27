#include "main.h"
/**
 * print_rev - A function that prints a string, in reverse
 * @s: Function parameter
 *
 */
void print_rev(char *s)
{
	int len = 0;
	int i = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	for (i = len; i >= 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
