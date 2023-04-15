#include "main.h"
/**
 * puts_half - A function that prints half of a string.
 * @str: Function parameter
 *
 */
void puts_half(char *str)
{
	int i, hfcnt, cnt = 0;

	for (i = 0; str[i] != '\0'; i++)
		cnt++;

	if ((cnt % 2) == 1)
		hfcnt = (cnt + 1) / 2;
	else
		hfcnt = (cnt / 2);

	for (i = hfcnt; i < cnt; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
