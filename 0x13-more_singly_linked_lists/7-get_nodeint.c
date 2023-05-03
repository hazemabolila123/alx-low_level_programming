#include "lists.h"

/**
 * get_nodeint_at_index- A function that returns a node at the index passed
 * @head: Pointer to the first node in the linked list
 * @index: index of the node will be returned
 *
 * Return: the node at th index pass or NULL if the index not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	while (tmp != NULL && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	return (tmp);
}
