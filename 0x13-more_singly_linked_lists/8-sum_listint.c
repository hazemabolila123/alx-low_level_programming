#include "lists.h"

/**
 * sum_listint- A function that returns the sum of all elements in the node
 * @head: Pointer to the first node in the linked list
 *
 * Return: Sum of the elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
