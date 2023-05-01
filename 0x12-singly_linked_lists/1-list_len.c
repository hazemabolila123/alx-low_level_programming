#include "lists.h"

/**
 * list_len- A function that returns the length of the linked list
 * @h: Pointer to the first node in the linked list
 *
 * Return: Number of the nodes
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *tmp = h;

	while (tmp != NULL)
	{
		len++;
		tmp = tmp->next;
	}
	return (len);
}
