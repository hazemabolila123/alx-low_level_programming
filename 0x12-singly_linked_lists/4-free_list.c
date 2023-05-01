#include "lists.h"

/**
 * free_list - A function that frees a linked list
 * @head: Pointer to the first node in the single linked list
 *
 */
void free_list(list_t *head)
{
	list_t *tmp = head;

	while (head != NULL)
	{
		free(head->str);
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
