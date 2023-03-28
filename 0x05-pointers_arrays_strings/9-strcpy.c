#include "main.h"
/**
 * *_strcpy - A function that copies a  string
 * @src: Function parameter
 * @dest: Function parameter
 * Return: Copied string
 *
 */
char *_strcpy(char *dest, char *src)
{
	int cnt = 0;
	int i;

	while (src[cnt] != '\0')
		cnt++;
	for (i = 0; i < cnt; i++)
	{
		dest[i] = src[i];
	}
	dest[cnt] = '\0';
	return (dest);
}
