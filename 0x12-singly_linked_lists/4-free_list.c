#include "lists.h"
#include <stdlib.h>

/**
 * free_list - it frees linked list
 * @head: list_t list freed
 */
void free_list(list_t *head)
{
	list_t *x; /* variable to hold a reference to the next node*/

	while (head)
	{
		x = head->next;
		free(head->str);
		free(head);
		head = x;
	}
}

