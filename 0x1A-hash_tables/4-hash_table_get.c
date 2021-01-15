#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
* hash_table_create - function that creates a hash table
* @size: size of the array
* Return: pointer to the newly created hash table
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index = key_index((unsigned const char*)(char *)key, ht->size);
    hash_node_t *aux_node = (ht->array)[index];
    
    if (!aux_node)
    {
        free(aux_node);
        return (NULL);
    }
    while(aux_node != NULL)
    {
        if (strcmp(key, aux_node->key) == 0)
            break;
        aux_node = aux_node->next;
    }
    if (aux_node == NULL)
        return (NULL);
    return(aux_node->value);
}