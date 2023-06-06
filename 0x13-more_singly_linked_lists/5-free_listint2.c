#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - frees listint_t list
 * @head: double pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *x;

	if (head != NULL)
	{
		while (*head)
		{
			x = (*head)->next;
			free(*head);
			*head = x;
		}
	}
	else
		return;
	*head = NULL;
}
