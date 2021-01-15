#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
* hash_table_create - function that creates a hash table
* @size: size of the array
* Return: pointer to the newly created hash table
*/
void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *aux_node;
    hash_node_t *aux2;
    unsigned long int i;
    
    for (i = 0; i < ht->size; i++)
    {
        aux_node = ht->array[i];
        if ((aux_node == NULL))
            continue;
        while (aux_node != NULL)
        {   
            aux2 = aux_node->next;
            free(aux_node);
            aux_node = aux2;
        }
    }
    free(ht->array);
    free(ht);
}