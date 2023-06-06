#include "lists.h"

/**
 * reverse_listint - reverses listint_t list
 * @head: double pointer to the first node in listint_t list
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev = NULL;
	listint_t *rev2 = NULL;

	while (*head)
	{
		rev2 = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = rev2;
	}
	*head = rev;
	return (*head);
}
