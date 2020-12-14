#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list_t list.
 * @head: head of the list
 * @n: element
 *
 * Return: the added node or NULL of it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *aux;

	if (!head)
	{
		return (NULL);
	}
	aux = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	aux->next = new;
	return (new);
}
