#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a list_t list
 * @head: head of the list
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
	free(head);
}
