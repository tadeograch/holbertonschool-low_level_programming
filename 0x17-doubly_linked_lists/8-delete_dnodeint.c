#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index.
 * @h: head of the list
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head;
	dlistint_t *sig;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = aux->next;
		free(aux);
		return (1);
	}
	for (i = 0; i < index - 1 && aux != NULL; i++)
		aux = aux->next;
	if (aux == NULL || aux->next == NULL)
		return (-1);
	sig = aux->next->next;
	free(aux->next);
	aux->next = sig;
	return (1);
}
