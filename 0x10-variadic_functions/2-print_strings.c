#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - A function that prints a variable number of arguments
 * @separator: Required funstion argument
 * @n: Variable arguments count
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list countptr;
	char *tmp;

	va_start(countptr, n);

	for (i = 0; i < n; i++)
	{
		tmp = va_arg(countptr, char *);
		if (tmp != NULL)
			printf("%s", tmp);
		else
			printf("%s", "(nil)");

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	putchar('\n');

	va_end(countptr);
}

