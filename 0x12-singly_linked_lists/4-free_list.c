#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: head of the list
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *aux;

	while (head != NULL)
	{
		aux = head;
		free(aux->str);
		free(aux);
		head = head->next;
	}
}
