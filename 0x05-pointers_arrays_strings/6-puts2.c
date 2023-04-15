#include "main.h"
/**
 * puts2 - A function that prints every other character of a string.
 * @str: Function parameter
 *
 */
void puts2(char *str)
{
	int i, cnt = 0;

	for (i = 0; str[i] != '\0'; i++)
		cnt++;

	for (i = 0; i < cnt; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
