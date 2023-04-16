#include "main.h"
/**
 * _strncat - Function
 * @dest: Functon parameter
 * @src: Function parameter
 * @n: Function parameter
 * Return: Concatanted String
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, dlen = 0, slen = 0;

	for (i = 0; dest[i] != '\0'; i++)
		dlen++;

	for (i = 0; src[i] != '\0'; i++)
		slen++;

	if (n >= slen)
		n = slen;

	for (i = 0; i < n; i++)
		dest[dlen + i] = src[i];

	return (dest);
}
