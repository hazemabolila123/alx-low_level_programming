#include "main.h"
/**
 * _sqrt_recursion - A function that returns natural square root of a number
 * @n: Function parameter
 * @val: Root
 * Return: returns natural square root of a number
 *
 */
int sqr(int n, int val);
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}

/**
 * sqr - Function
 * @n: Function parameter
 * @val: Function parameter
 * Return: Success
 *
 */

int sqr(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (sqr(n, val + 1));
	else
		return (-1);
}
