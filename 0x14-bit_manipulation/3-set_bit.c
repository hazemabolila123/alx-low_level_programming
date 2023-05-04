#include "main.h"

/**
  * set_bit - Sets value of a bit to 1
  * @n: Number
  * @index: The bit to be set to 1
  *
  * Return: 1 if success, else -1
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(long int) * 8 - 1))
		return (-1);

	*n |= (1 << index);
	return (1);
}
