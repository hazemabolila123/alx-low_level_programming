#include "main.h"
/**
 * times_table - Prints the time table
 */

void times_table(void)
{
	int i, j, multi;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			multi = i * j;
			if (multi <= 9)
				_putchar(' ');
			else
				_putchar((multi / 10) + '0');
			_putchar((multi % 10) + '0');
		}
		_putchar('\n');
	}
}
