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
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && n--)
	{
		*ptr = *src;
		src++;
		ptr++;
	}
	*ptr = '\0';
	return (dest);
}
