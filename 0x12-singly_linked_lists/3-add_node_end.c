#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Adds a new node at the end of linked list
 * @head: pointer to list_t list
 * @str: the str to be added in the node
 * Return: new address or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int counter = 0;
	list_t *new_node;
	list_t *x = *head;

	new_node = malloc(sizeof(list_t));

	if (new_node)
	{
		new_node->str = strdup(str);
		new_node->len = counter;
		new_node->next = NULL;
	}
	else
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (x->next)
	{
		x = x->next;
	}
	x->next = new_node;
	return (new_node);
}
