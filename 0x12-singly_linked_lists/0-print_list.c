#include "lists.h"


/**
 * print_list - A function that prints the strings of linked list
 * @h: pointer to the first node of single linked list
 *
 * Return: Count of nodes
 */

size_t print_list(const list_t *h)
{
	size_t cnt = 0;
	const list_t *tmp = h;

	while (tmp != NULL)
	{
		if (tmp->str != NULL)
			printf("[%u] %s\n", tmp->len, tmp->str);
		else
			printf("[0] (nil)\n");
		cnt++;
		tmp = tmp->next;
	}
	return (cnt);
}
