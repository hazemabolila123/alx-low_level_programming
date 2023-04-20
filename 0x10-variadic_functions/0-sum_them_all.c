#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - A function that add variable number of elements
 * @n: Count of arguments
 *
 * Return: Sum of arguments
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list countptr;

	if (n == 0)
		return (0);

	va_start(countptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(countptr, int);

	va_end(countptr);

	return (sum);
}
