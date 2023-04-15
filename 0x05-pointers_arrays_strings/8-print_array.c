#include "main.h"
#include <stdio.h>
/**
 * print_array - Function that prints n elements of an array
 * @a: Function parameter
 * @n: Function parameter
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == (n - 1))
			break;
		putchar(',');
		putchar(' ');
	}
	printf("\n");
}
