#include "lists.h"

/**
 * find_listint_loop - checks for a circular linked list
 * @head: linked list
 * Return: 1 if circular, else 0
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tort = head, *hare = head;

	while (hare && hare->next)
	{
		tort = tort->next;
		hare = hare->next->next;
		if (tort == hare)
		{
			tort = head;
			while (tort != hare)
			{
				tort = tort->next;
				hare = hare->next;
			}
			return (tort);
		}
	}
	return (NULL);
}
