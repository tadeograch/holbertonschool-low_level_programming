#include "lists.h"

/**
 * insert_dnodeint_at_index - insterts a new node at index.
 * @h: head of the list
 * @idx: index
 * @n: n of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *aux;
	dlistint_t *aux2;
	dlistint_t *new;

	if (!h)
	{
		return (add_dnodeint(h, n));
	}
	aux = *h;
	for (i = 0; i < idx && aux != NULL; i++)
	{
		aux = aux->next;
	}
	if (aux == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	aux = aux->prev;
	aux2 = aux->next;
	new->n = n;
	aux->next = new;
	new->prev = aux;
	aux2->prev = new;
	new->next = aux2;
	return (aux);
}
