#include "main.h"
/**
 * _strcat - Function
 * @dest: Functon parameter
 * @src: Function parameter
 * Return: Concatanted String
 *
 */
char *_strcat(char *dest, char *src)
{
	int slen = 0;
	char dlen;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		dlen++;
	for (i = 0; src[i] != '\0'; i++)
		slen++;
	for (i = 0; i <= slen; i++)
		dest[dlen + i] = src[i];
	return (dest);
}
