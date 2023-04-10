#include "main.h"
/**
 * is_prime_number - A function checks if the input integer is a prime number
 * @n: Function parameter
 * @val: Function parameter
 * Return: Success
 *
 */
int check(int n, int val);
int is_prime_number(int n)
{
	return (check(n, 2));
}
/**
 * check - Function
 * @n: Parameter
 * @val: Parameter
 * Return: Success
 *
 */
int check(int n, int val)
{
	if (val >= n && n > 1)
		return (1);
	else if (n % val == 0 || n <= 1)
		return (0);
	else
		return (check(n, val + 1));
}
