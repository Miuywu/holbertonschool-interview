#include "lists.h"
/**
 * is_palindrome - checks if a linked list is a palindrome
 * @head: linked list
 * Return: 0 is the list is not a palindrome, else 1
 */
int is_palindrome(listint_t **head)
{
	listint_t *cpy, *cpy2;
	int a, l = 0, m, arr[8024];
	
	if (!head|| !*head)
		return (1);
	for(a = 0, cpy = *head; cpy; cpy = cpy->next, a++)
	{
		l++;
		arr[a] = cpy->n;
	}
	if (l % 2)
		m = l / 2 + 1;
	else
		m = l / 2;
	for (a = 0; a <= m; a++, l--)
		if (arr[a] != arr[l])
			return (0);
	return (1);
}
