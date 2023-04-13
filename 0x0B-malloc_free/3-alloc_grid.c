#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - A function that put zeros in a 2 dimensional array of integers.
 * @height: Function parameter
 * @width: Function parameter
 *
 * Return: returns a pointer to a 2 dimensional array of integers.
 *
 */
int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	ptr = malloc(sizeof(*ptr) * height);

	if (width <= 0 || height <= 0 || ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(**ptr) * width);
		if (ptr[i] == NULL)
		{
			while (i--)
			{
				free(ptr[i]);
			}
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);

}
