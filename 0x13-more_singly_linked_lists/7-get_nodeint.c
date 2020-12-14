#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: first node of the list
 * @index: index
 *
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *aux;

	if (!head)
	{
		return (NULL);
	}
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
