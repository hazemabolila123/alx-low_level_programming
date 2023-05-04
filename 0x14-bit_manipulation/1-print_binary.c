#include "main.h"

/**
 * binary_to_uint- A function that converts a binary number to number
 * @b: A string to be converted
 *
 * Return: deciaml number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			num <<= 1;

		else if (b[i] == '1')
			num = (num << 1) + 1;

		else
			return (0);
	}

	return (num);
}
