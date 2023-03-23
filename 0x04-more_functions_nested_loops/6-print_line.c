#include "main.h"
/**
 * print_line - Functon used to print _ numbers of times
 * @n: Function parameter
 *
 */
void print_line(int n)
{
	int i;

	for (i = n; i > 0; i--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
