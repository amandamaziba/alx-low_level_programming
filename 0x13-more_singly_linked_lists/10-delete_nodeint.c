#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at specified index of a listint_t
 * @head: pointer to the first element in listint_t list
 * @index: position of the node to be deleted
 * Return: 1  or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = NULL;
	unsigned int i;
	listint_t *x = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(x);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (!x || !(x->next))
			return (-1);
		x = x->next;
	}
	node = x->next;
	x->next = node->next;
	free(node);
	return (1);
}
