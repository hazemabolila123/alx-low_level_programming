#include "main.h"
/**
 * _isupper - Function checks if the number it takes represents
 * an upper letter or not
 * @c: Function parameter
 * Return: 1 if the letter is uppercase else 0
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
