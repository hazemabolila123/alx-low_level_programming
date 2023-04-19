#include "function_pointers.h"
/**
 * array_iterator - A function that calls another function
 * @array: Function parameter
 * @size: Function parameter
 * @action: Function parameter
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
