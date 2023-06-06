#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all linked list's elements
 * @h: listint_t to be printed
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
