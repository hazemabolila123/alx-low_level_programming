#include <stdlib.h>
#include "main.h"

/**
 * _calloc - A function that allocates memory for an array with 0
 * @nmemb: Function parameter
 * @size: Function parameter
 * Return: Pointer to the first element in an array
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc((nmemb * size));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}

