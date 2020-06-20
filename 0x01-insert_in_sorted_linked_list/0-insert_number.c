#include "lists.h"
#include <stdlib.h>
/**
 * insert_node - insert node into sorted linked list
 * @head: first node of list
 * @number: value
 * Return: address of new node
 */
listint_t *insert_node(listint_t **head, int number)
{
    listint_t *new, *cpy;

    if (!head)
        return (NULL);
    new = malloc(sizeof(*new));
    if (!new)
        return (NULL);

    new->n = number;
    new->next = NULL;

    if (!*head)
        *head = new;
    else if (number < (*head)->n)
    {
        new->next = *head;
        *head = new;
    }
    else
    {
        cpy = *head;
        while (cpy->next && cpy->next->n < number)
            cpy = cpy->next;
        new->next = cpy->next;
        cpy->next = new;
    }
    return (new);
}
