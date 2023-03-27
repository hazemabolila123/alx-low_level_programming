#include "main.h"
/**
 * swap_int - A function taht swaps two numbers
 *
 * @a: Function parameter
 * @b: Function parameter
 *
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
