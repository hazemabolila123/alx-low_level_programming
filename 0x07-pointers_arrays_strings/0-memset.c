#include "main.h"
/**
 * _memset - A function that fills memory with a constant byte.
 * @s: Function parameter
 * @b: Function parameter
 * @n: Function parameter
 *
 * Return:Returns a pointer to the memory area
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);

}
