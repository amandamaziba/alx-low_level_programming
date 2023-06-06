#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: first node in the listint_t list
 * @index: node index
 * Return: pointer or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *x = head;

	while (x && i < index)
	{
		x = x->next;
		i++;
	}
	return (x ? x : NULL);
}
