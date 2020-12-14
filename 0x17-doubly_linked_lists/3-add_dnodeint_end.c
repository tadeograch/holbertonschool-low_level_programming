#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head of the list
 * @n: n of the new node
 * Return: adress of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
		new->prev = tmp;
	}
	return (new);
}
