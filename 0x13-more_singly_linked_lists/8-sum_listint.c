#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t list
 * @head: listint_t list first node
 * Return: calculated sum
 */
int sum_listint(listint_t *head)
{
	listint_t *x = head;
	int sum = 0;

	while (x)
	{
		sum = sum + x->n;
		x = x->next;
	}
	return (sum);
}
