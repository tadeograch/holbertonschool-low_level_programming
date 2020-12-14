#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int n = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
