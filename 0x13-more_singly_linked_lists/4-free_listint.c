#include "lists.h"

/**
 * free_listint- A function that frees a lnked list
 * @head: Pointer to first node in the linked list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (head != NULL)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
