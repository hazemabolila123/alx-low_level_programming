#include "main.h"
/**
 * string_toupper - Function
 * @s: Functon parameter
 * Return: Sucess
 *
 */
char *string_toupper(char *s)
{
	while (*s != '\0')
	{
		if (*s >= 97 && *s <=122)
		{
			*s -= 32;
			s++;
		}
		else
			s++;
	}
	return (s);

}
