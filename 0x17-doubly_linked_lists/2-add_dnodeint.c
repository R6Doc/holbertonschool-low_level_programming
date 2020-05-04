#include "lists.h"

/**
 * add_dnodeint - add a note to the list
 * @head: head node
 * @n: Value
 * Return: return node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

if (head == NULL)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->prev = NULL;
new->next = *head;
*head = new;
if (new->next != NULL)
(new->next)->prev = new;
return (new);
}
