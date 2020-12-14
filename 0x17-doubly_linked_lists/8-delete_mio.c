#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *aux;
    dlistint_t *sig;
    dlistint_t *ant
    unsigned int i;

    if (head == NULL && *head == NULL)
    {
        return (-1);
    }
    aux = *head;
    if (aux->next == NULL )
    {
        free(aux);
        return (1);
    }
    if (index == 0)
    {
        *head = (*head)->next;
        (*head)->prev = NULL;
        free(aux);
        return (1);
    }
    for (i = 0; i < index && aux != NULL; i++)
    {
        aux = aux->next;
    }
    if (aux == NULL || aux->next == NULL)
    {
        return (-1);
    }
    sig = aux->next;
    ant = aux->prev;
    sig->prev = ant;
    ant->next = sig;
    free(aux);
    return (1);
}