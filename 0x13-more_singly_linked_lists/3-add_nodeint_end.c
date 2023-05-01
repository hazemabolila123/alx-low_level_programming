#include "lists.h"

/**
 * add_nodeint_end- A function that adds a nodeat the end of the linked list
 * @head: Pointer to the first node in the linked list
 * @n: Number to be added to the linked list
 *
 * Return: Address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (tmp != NULL)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	return (new_node);
}
