#include "main.h"
/**
 * _memcpy - A function that copies memory area.
 * @dest: Function parameter
 * @src: Function parameter
 * @n : Function parameter
 *
 * Return: Returns a pointer to dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
