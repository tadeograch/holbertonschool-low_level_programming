#include "lists.h"

/**
 * sum_dlistint - sum all the n values of the list.
 * @head: head of the list
 * Return: the result of sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
