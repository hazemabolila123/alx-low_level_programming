#include "main.h"
/**
 * print_rev - A function that prints a string, in reverse
 * @s: Function parameter
 *
 */
void print_rev(char *s)
{
	int i, cnt = 0;

	for (i = 0; s[i] != '\0'; i++)
		cnt++;

	for (i = (cnt - 1); i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
