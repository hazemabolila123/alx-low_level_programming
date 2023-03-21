#include "main.h"
/**
 * print_last_digit - prints the last digit of givin parameter
 * @num: function parameter
 * Return: prints the last digit of givin number 
 *
 */
int print_last_digit(int num)
{
	int ld;

	ld = num % 10;
	if ( num < 0)
		ld *= -1;
	_putchar('0' + ld);
	return (ld);
}
