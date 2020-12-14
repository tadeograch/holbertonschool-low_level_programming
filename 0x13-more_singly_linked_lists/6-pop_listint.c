#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint -eletes the head node of a listint_t linked list.
 * @head: first node of the list.
 *
 * Return: the head nodes data (n)
 */
int pop_listint(listint_t **head)
{
	int x = 0;
	listint_t *aux;

	if (*head == NULL)
	{
		return (0);
	}
	x = (*head)->n;
	aux = *head;
	*head = (*head)->next;
	free(aux);
	return (x);
}
