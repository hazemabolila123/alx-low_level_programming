#include "main.h"
/**
 * print_last_digit - prints the last digit of givin parameter
 * @num: function parameter
 * Return: prints the last digit of givin parameter
 *
 */
int print_last_digit(int num)
{
	long ld;
	int ild;

	if (num >= 0)
	{
		ld = num % 10;
		ild = (int) ld;
		_putchar('0' + ild);
		return (ild);
	}
	else
	{
		num = num * -1;
		ld = num % 10;
		ild = (int) ld;
		_putchar('0' + ild);
		return (ild);
	}
}
