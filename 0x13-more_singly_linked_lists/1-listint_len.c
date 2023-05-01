#include "lists.h"

/**
 * listint_len- A function that returns the length of the linked list
 * @h: Pointer to the first node in the linked list
 *
 * Return: Number of the nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *tmp = h;

	while (tmp != NULL)
	{
		len++;
		tmp = tmp->next;
	}

	return (len);
}
