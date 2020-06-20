#include "lists.h"
#include <stdio.h>
/**
 * check_cycle - checks if given linked list is circular
 * @list: head node of given linked list
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *one, *two;

	if (!list)
		return (0);

	one = list;
	two = one;
	while (one && two && two->next)
	{
		one = one->next;
		two = two->next->next;
		if (one == two)
			return (1);
	}
	return (0);
}
