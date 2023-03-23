#include "main.h"
/**
 * print_triangle - Fucnction display a triangle
 * @size: Function parameters
 *
 */
void print_triangle(int size)
{
	int i, j;

	if(size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = i; j < (size - 1); j++)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
