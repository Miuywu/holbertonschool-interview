#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * is_palindrome - checks if listint_t is a palindrome
 * @head: start of list
 * Return: 0 if not palindrome, 1 if is palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *r;
	int list_len, a, b, stop;
	int arr[2000];

	if (*head)
	{
		for (r = *head, list_len = 0; r; r = r->next)
			list_len++;

		/*arr = malloc(sizeof(int) * list_len);*/

		for (a = 0, r = *head; a < list_len; a++, r = r->next)
			arr[a] = r->n;

		stop = list_len / 2;
		for (a = 0, b = list_len - 1; a < stop; a++, b--)
			if (arr[a] != arr[b])
			{
				free(arr);
				return (0);
			}
		free(arr);
	}
	return (1);
}