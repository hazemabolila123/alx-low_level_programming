#include "main.h"

/**
  * print_binary - Prints binary form of number
  * @n: Number
  */
void print_binary(unsigned long int n)
{
	unsigned long int flag = 0x8000000000000000L;
	char non_zero = 0;

	if (n)
	{
		while (flag)
		{
			if (n & flag)
			{
				non_zero = 1;
			}
			if (non_zero == 1)
			{
				_putchar(n & flag ? '1' : '0');
			}
			flag >>= 1;
		}
	}
	else
	{
		_putchar('0');
	}
}
