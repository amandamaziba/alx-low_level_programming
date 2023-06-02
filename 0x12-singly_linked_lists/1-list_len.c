#include "lists.h"
#include <stdlib.h>
#include <stdlib.h>

/**
 * list_len - it prints the number of elements
 * @h: pointer to the list_t list
 * Return: the number of elements (counter)
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0; /* type size_t variable to 0*/

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
