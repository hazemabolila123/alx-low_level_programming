#include "lists.h"

/**
 * add_node_end- A function that adds a node at the end of a linked list
 * @head: Pointer to the first node in the single linked list
 * @str: String to be stored in the new node
 *
 * Return: Address of the new_node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = *head;
	list_t *new_node =  malloc(sizeof(list_t));
	char *strdp = strdup(str);

	if (strdp == NULL || new_node == NULL)
	{
		free(new_node);
		free(strdp);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->str = strdp;
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
