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
	dlistint_t *nodo, *new;

	nodo = malloc(sizeof(dlistint_t));
	if (nodo == NULL)
		return (NULL);
	new = (*h);
	nodo->prev = NULL;
	nodo->next = NULL;
	nodo->n = n;
	if (idx == 0)
	{
		if (*h == NULL)
			(*h) = nodo;
		else
		{
			nodo->next = (*h);
			new->prev = nodo;
			(*h) = nodo;
		}
		return (nodo);
	}
	for (i = 0; new->next != NULL || i + 1 == idx; i++)
	{
		if (i + 1 == idx)
		{
			if (new->next != NULL)
				new->next->prev = nodo;
			nodo->next = new->next;
			new->next = nodo;
			nodo->prev = new;
			return (nodo);
		}
		new = new->next;
	}
	free_dlistint(nodo);
	return (NULL);
}
