#include "main.h"

/**
  * clear_bit - Sets value of a bit to 0
  * @n: Number
  * @index: The bit to be set to 0
  *
  * Return: 1 if success, else -1
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(long int) * 8 - 1))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
