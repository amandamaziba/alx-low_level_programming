#include "lists.h"

/**
 * find_listint_loop -  finds the loop in listint_t list
 * @head: list to be searched
 * Return: node address or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *search1 = head;
	listint_t *search2 = head;

	if (head)
	{
		while (search1 && search2  && search2->next)
		{
			search2  = search2->next->next;
			search1 = search1->next;
			if (search2  == search1)
			{
				search1 = head;
				while (search1 != search2)
				{
					search1 = search1->next;
					search2  = search2->next;
				}
				return (search2);
			}
		}
	}
	else
		return (NULL);
	return (NULL);
}
