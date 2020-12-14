#include "lists.h"

/**
 * get_dnodeint_at_index -  gets the nth node of a dlistint_t linked list.
 * @head: head of the list
 * @index: index
 * Return: adress of the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *aux;

	aux = head;
	for (i = 0; i < index && aux != NULL; i++)
	{
		aux = aux->next;
	}
	if (aux == NULL)
	{
		return (NULL);
	}
	return (aux);
}
