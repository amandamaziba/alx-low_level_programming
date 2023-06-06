#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns number of elements in linked lists
 * @h: listint_t to be checked
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}

