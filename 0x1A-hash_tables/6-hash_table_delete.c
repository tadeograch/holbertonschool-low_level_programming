#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
* hash_table_delete - function that deletes a hash table
* @ht: hash table
* Return: Nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux_node;
	hash_node_t *aux2;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		aux_node = ht->array[i];
		while (aux_node != NULL)
		{
			aux2 = aux_node->next;
			free(aux_node->value);
			free(aux_node->key);
			free(aux_node);
			aux_node = aux2;
		}
	}
	free(ht->array);
	free(ht);
}
