#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list_t list.
 * @head: first node of the list
 * @n: element
 *
 * Return: the added node (Success)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!head)
	{
		return (0);
	}
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		free(new);
		return (0);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
