#include "main.h"
#include <stdlib.h>

/**
  * _realloc - A function that reallocates a memory block using malloc and free
  * @ptr: Old pointer to memory
  * @old_size: Old size of memory
  * @new_size: New size of memory to be allocated
  *
  * Return: ptr to the new pointer
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *ptrcp = ptr;
	unsigned int i;

	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size == 0)
	{
		if (ptr != NULL)
		{
			free(ptr);
			return (NULL);
		}
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (new_ptr);
	}
	for (i = 0; i < (old_size < new_size ? old_size : new_size); i++)
	{
		new_ptr[i] = ptrcp[i];
	}
	free(ptr);
	return (new_ptr);
}
