#include "main.h"
/**
 * _isupper - checks if the that num represent a uppercase char on not
 * @c: is a parameter
 * Return: 1 if condition happens else 0
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
