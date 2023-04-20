#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - A function that prints a variable number of arguments
 * @separator: Required funstion argument
 * @n: Variable arguments count
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list countptr;

	va_start(countptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(countptr, int));

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	putchar('\n');

	va_end(countptr);
}
