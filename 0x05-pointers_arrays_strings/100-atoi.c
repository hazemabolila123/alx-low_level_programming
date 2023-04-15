#include "main.h"
/**
 * _atoi - A function that convert a string to an integer.
 * @s: Pointer to first element in string
 *
 * Return: Integer
 *
 */
int _atoi(char *s)
{
	int i, num = 0, sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
			num = (num * 10) + (s[i] - '0');
		else if (num > 0)
			break;
	}

	return ((num * sign));
}

