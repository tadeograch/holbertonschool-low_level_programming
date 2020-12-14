#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees a list_t list
 * @head: head of the list
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		aux = *head;
		*head = (*head)->next;
		free(aux);

	}
	*head = NULL;
}
