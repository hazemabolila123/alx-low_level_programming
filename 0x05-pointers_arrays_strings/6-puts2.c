#include "main.h"
/**
 * puts2 - A function that prints every other character of a string.
 * @str: Function parameter
 *
 */
void puts2(char *str)
{
	char *ptr = str;
	int i;
	int len = 0;

	while (*ptr != '\0')
	{
		len++;
		ptr++;
	}
	for (i = 0; i <= (len - 1); i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
