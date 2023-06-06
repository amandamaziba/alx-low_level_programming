#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer of the first element
 * @n: input
 * Return: pointer or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x = *head;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node)
	{
		new_node->n = n;
		new_node->next = NULL;
		if (*head == NULL)
		{
			*head = new_node;
			return (new_node);
		}
	}
	else
		return (NULL);
	while (x->next)
		x = x->next;
	x->next = new_node;
	return (new_node);
}
