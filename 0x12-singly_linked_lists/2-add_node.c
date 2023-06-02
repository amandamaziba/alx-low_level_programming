#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_node - adds a new node
 * @head: pointer to list_t list
 * @str: the str to be added in the node
 * Return: address or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *new_str;

	while (str[i])
		i++;
	new_str = malloc(sizeof(list_t));
	if (new_str)
	{
		new_str->str = strdup(str);
		new_str->len = i;
		new_str->next = (*head);
		(*head) = new_str;
	}
	else
		return (NULL);
	return (*head);
}
