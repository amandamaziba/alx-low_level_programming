#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in listint_t list
 * @head: pointer to the first node in listint_t list
 * @idx: new node position
 * @n: input
 * Return: pointer or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *x = *head;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));

	if (new_node || head)
	{
		new_node->n = n;
		new_node->next = NULL;
		if (idx == 0)
		{
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}
	}
	else
		return (NULL);
	while (x && i < idx)
	{
		if (i == idx - 1)
		{
			new_node->next = x->next;
			x->next = new_node;
			return (new_node);
		}
		else
			x = x->next;
		i++;
	}
	return (NULL);
}
