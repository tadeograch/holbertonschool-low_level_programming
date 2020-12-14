#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: first node of the list
 * @idx: index
 * @n: element
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *aux, *new;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	aux = *head;
	for (i = 0; i < (idx - 1) && aux != NULL; i++)
	{
		aux = aux->next;
	}
	if (aux == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = aux->next;
	aux->next = new;
	return (new);
}
