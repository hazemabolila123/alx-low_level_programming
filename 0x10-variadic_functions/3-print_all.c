#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * format_char - A function that accept a char
 * @sp: Separator
 * @op: Parameter of type va_list
 *
 */
void format_char(char *sp, va_list op)
{
	printf("%s%c", sp, va_arg(op, int));
}

/**
 * format_int - A function that accept a int
 * @sp: Separator
 * @op: Parameter of type va_list
 *
 */
void format_char(char *sp, va_list op)
{
        printf("%s%d", sp, va_arg(op, int));
}

/**
 * format_float - A function that accept a float
 * @sp: Separator
 * @op: Parameter of type va_list
 *
 */
void format_float(char *sp, va_list op)
{
        printf("%s%f", sp, va_arg(op, float));
}

/**
 * format_string - A function that accept a array of chars
 * @sp: Separator
 * @op: Parameter of type va_list
 *
 */
void format_string(char *sp, va_list op)
{
	char * str;

	tmp = va_arg(op , char *);
	
	if (str == NULL)
		str = "(nil)";

        printf("%s%s", sp, str);
}

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *sp= "";
	va_list counterptr;
	op_t ops[] = {
        {"c", format_char},
        {"i", format_int},
        {"f", format_float},
        {"s", format_string},
        {NULL, NULL}
    };

	while (format != NULL && format[i] != NULL)
	{
		j = 0;
		
		while (ops[j].op != NULL)
		{
			if (ops[j].op[0] == format[i])
			{
				ops[j].f(sp, counterptr);
				sp = ", "
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	va_end(counterptr);
}


