#include "main.h"
/**
 * puts_half - A function that prints half of a string.
 * @str: Function parameter
 *
 */
void puts_half(char *str)
{
	int len = 0;
	int i, j;
	char *ptr = str;

	while (*ptr != '\0')
	{
		len++;
		ptr++;
	}
	if ((len % 2) == 1)
		j = (len + 1) / 2;
	else
		j = (len / 2);
	for (i = j; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
