#include "main.h"

/**
  * _strncpy - Function
  * @dest: Function parameter
  * @src: function parameter
  * @n: Function parameter
  * Return: Success
  *
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n) && (src[i] != '0'); i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
