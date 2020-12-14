#include "lists.h"

/**
 * free_dlistint - frees the list.
 * @head: head of the list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
