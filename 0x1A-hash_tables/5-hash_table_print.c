#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
* hash_table_create - function that creates a hash table
* @size: size of the array
* Return: pointer to the newly created hash table
*/
void hash_table_print(const hash_table_t *ht)
{
    hash_node_t *aux_node;
    unsigned long int i;
    int flag = 0;

    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        aux_node = ht->array[i];
        if ((aux_node == NULL))
            continue;
        while (aux_node != NULL)
        {
            if (flag == 0)
            {
                printf("'%s': '%s'", aux_node->key, aux_node->value);
                flag += 1;
            }
            else
            {
            printf(", '%s': '%s'", aux_node->key, aux_node->value);
            }
            aux_node = aux_node->next;
        }
    }
    printf("}\n");
}
