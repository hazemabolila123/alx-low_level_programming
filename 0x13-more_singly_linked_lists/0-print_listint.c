#include "lists.h"

/**
 * print_listint - A function that prints the numbers of linked list
 * @h: pointer to the first node of single linked list
 *
 * Return: Count of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;
	const listint_t *tmp = h;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		cnt++;
		tmp = tmp->next;
	}

	return (cnt);
}
