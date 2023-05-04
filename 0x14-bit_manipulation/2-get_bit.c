#include "main.h"

/**
 * get_bit- A function that returns the value of a bit at a given index
 * @n: Number
 * @index: The index of the bit to be returned
 *
 * Return: The value of the bit to be returned
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > ((sizeof(long int) * 8) - 1))
		return (-1);
	else
		return ((n >> index) & 1);
}
