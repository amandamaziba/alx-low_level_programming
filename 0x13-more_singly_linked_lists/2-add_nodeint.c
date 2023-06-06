#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node in the  linked list
 * @head: pointer to the first node in the list
 * @n: input
 * Return: pointer or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}
	else
		return (NULL);
	return (new_node);
}
