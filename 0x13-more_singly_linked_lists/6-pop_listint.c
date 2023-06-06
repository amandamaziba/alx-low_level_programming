#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the head node of listint_t list
 * @head: first element in the listint_t list
 * Return: the head node’s data
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *x;

	if (head || *head)
	{
		i = (*head)->n;
		x = (*head)->next;
		free(*head);
		*head = x;
		return (i);
	}
	else
		return (0);
}
