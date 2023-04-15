#include "main.h"
/**
 * _puts - A function that prints a string
 * @str: Function parameter
 *
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(*str);

	_putchar('\n');
}
