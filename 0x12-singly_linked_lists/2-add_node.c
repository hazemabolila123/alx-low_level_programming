#include "lists.h"
#include <string.h>

/**
 * add_node- A function that adds a node at the beginning of a linked list
 * @head: Pointer to the first node in the single linked list
 * @str: String to be stored in the new node
 *
 * Return: Address of the new_node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	char *strdp = strdup(str);

	if (strdp == NULL || new_node == NULL)
	{
		free(strdp);
		free(new_node);
		return (NULL);
	}

	new_node->str = strdp;
	new_node->len = strlen(strdp);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
