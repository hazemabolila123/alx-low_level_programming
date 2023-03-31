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
	char *ptr = dest;

	while (n--)
	{
		if (*src != '\0')
		{
			*ptr = *src;
			src++;
		}
		else
		{
			*ptr = '\0';
		}
		ptr++;
	}
	return (dest);
}
