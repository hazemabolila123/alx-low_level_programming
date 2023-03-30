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
	int dlen = 0;
	int slen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		dlen++;
	for (i = 0; src[i] != '\0'; i++)
		slen++;
	for (i = 0; i < n; i++)
		dest[dlen + i] = src[i];
	return (dest);
}
