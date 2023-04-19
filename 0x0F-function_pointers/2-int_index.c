#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer.
 * @array: Function parameter
 * @size: Function parameter
 * @cmp: Function paramter
 *
 * Return: index of element that matches the integer
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size > 0 && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
