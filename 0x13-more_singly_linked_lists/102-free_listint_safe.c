#include "lists.h"

/**
 * free_listint_safe - frees  listint_t list
 * @h: pointer to first node
 * Return: size the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *x;
	size_t a = 0;
	int k;

	if (h || *h)
	{
		while (*h)
		{
			k = *h - (*h)->next;
			if (x < 0)
			{
				free(*h);
				*h = NULL;
				a++;
				break;
			}
			else
			{
				x = (*h)->next;
				free(*h);
				*h = x;
				a++;
			}
		}
		*h = NULL;
		return (a);
	}
	else
		return (0);
}
