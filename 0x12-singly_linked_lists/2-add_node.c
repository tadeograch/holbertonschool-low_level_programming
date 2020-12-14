#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head of the list
 * @str: string
 *
 * Return: the added node (Success)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len = 0;

	if (!str || !head)
	{
		return (0);
	}
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
	new->next = *head;
	*head = new;
	return (new);
}
