#include "main.h"
/**
 * puts2 - A function that prints every other character of a string.
 * @str: Function parameter
 *
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	str++;
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
