#include "main.h"
/**
 * _islower - checks if the that num represent a lowercase char on not
 * @c: is a parameter
 * Return: 1 if condition happens else 0
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
