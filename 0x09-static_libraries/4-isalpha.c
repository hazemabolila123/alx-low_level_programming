#include "main.h"
/**
 * _isalpha - checks if that number presents an alphabet or not
 * @c: is function parameter
 * Return: 1 if the condition is true else 0
 *
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
