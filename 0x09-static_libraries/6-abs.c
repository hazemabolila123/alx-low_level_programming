#include "main.h"
/**
 * _abs - check if the number is the absolute value or not
 * @num: function parameter
 * Return: The absolute value of the parameter
 *
 */


int _abs(int num)
{
	if (num >= 0)
	{
		return (num);
	}
	else
	{
		num = num * -1;
		return (num);
	}
}
