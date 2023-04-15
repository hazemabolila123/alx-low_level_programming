#include "main.h"
/**
 * rot13 - A function that that maps a string.
 * @str: Function parameter
 *
 * Return: A pointer to the mapped string
 *
 */
char *rot13(char *str)
{
	int i, j;
	char *ptr = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *map = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; ptr[j] != '\0'; j++)
		{
			if (str[i] == ptr[j])
			{
				str[i] = map[j];
				break;
			}
		}
	}

	return (str);

}
