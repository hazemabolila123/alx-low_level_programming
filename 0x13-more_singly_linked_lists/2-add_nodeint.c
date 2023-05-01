#include "lists.h"

/**
 * add_nodeint- A function that adds a node at the beginning of a linked list
 * @head: Pointer to the first node in the single linked list
 * @n: integer to be stored in the new node
 *
 * Return: Address of the new_node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
