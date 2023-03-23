#include "main.h"
/**
 * _isdigit - checks if a digit
 * @c: function parameter
 * Return: success
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
