#include "shell.h"

/**
 * _strlen - A function that returns the length of a string
 * @str: The string we want to calculate its length
 *
 * Return: Length of a string
 */
int _strlen(char *str)
{
	int i, cnt = 0;

	for (i = 0; str[i] != '\0'; i++)
		cnt++;

	return (cnt);
}


/**
 * _strcmp - A function that comapres 2 strings
 * @s1: String one
 * @s2: String two
 *
 * Return: 0 if the two strings are the same
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			break;
		}
	}
	return (s1[i] - s2[i]);
}


/**
 * _strcat - A function that concatante two strings
 * @dest: String destination
 * @src: String source
 *
 * Return: Concatanted String
 */
char *_strcat(char *dest, char *src)
{
	int total, i, j;
	char *ptr;

	total = _strlen(dest) + _strlen(src) + 1;
	new = malloc(sizeof(char) * total);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; dest[i] != '\0'; i++)
		ptr[i] = dest[i];

	for (j = 0; src[j] != '\0'; i++, j++)
		ptr[i] = src[j];

	ptr[i] = '\0';
	return (ptr);
}


/**
 * _atoi - A function that converts a string to integer
 * @str: A string to be converted
 *
 * Return: 0 if fails to convert otherwise the number
 */
int _atoi(char *str)
{
	int i = 0, mult = 1, flag = 0;
	unsigned int number = 0;

	while (str[i])
	{
		if (str[i] == '-')
			mult *= -1;
		while (str[i] >= '0' && str[i] <= '9')
		{
			flag = 1;
			number = (number * 10) + (str[i] - '0');
			i++;
		}
		if (flag == 1)
			break;
		i++;
	}
	return ((number * mult));
}

