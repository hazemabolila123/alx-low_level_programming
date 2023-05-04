#include "main.h"

/**
 * flip_bits- A function that finds the count of different bits
 * @n: First number
 * @m: Second number
 *
 * Return: Count of different bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff = n ^ m;
	unsigned int cnt = 0;

	while (diff)
	{
		diff &= (diff - 1);
		cnt++;
	}
	return (cnt);
}
