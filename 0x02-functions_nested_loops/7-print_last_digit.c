#include "main.h"
/**
 * print_last_digit - prints the last digit of givin parameter
 * @num: function parameter
 * Return: prints the last digit of givin parameter
 *
 */
int print_last_digit(int num)
{
	int ld;

	if (num >= 0)
	{
		ld = num % 10;
		_putchar('0' + ld);
		return (ld);
	}
	else
	{
		num = num * -1;
		ld = num % 10;
		_putchar('0' + ld);
		return (ld);
	}
}
