#include "main.h"
/**
 * factorial - A function returns a fact of number
 * @n: Function parameter
 * Return: Fact of a number
 *
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
