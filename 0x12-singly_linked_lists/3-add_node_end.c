#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of the list
 * @str: string
 *
 * Return: the added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *aux;
	int len = 0;

	if (!str || !head)
	{
		return (0);
	}
	aux = *head;
	new = malloc(sizeof(list_t));
	if (!new)
	{
		free(new);
		return (0);
	}
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (0);
	}
	while (str[len])
	{
		len++;
	}
	new->len = len;
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
