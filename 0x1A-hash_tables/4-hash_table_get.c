#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
* hash_table_get - function that retrieves a value associated with a key
* @ht: hash table
* @key: the key
* Return: value associated with the element, or NULL if key couldnt be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *aux_node;

	if (!ht | !key)
		return (NULL);
	index = key_index((unsigned const char*)(char *)key, ht->size);
	aux_node = (ht->array)[index];
	while (aux_node != NULL)
	{
		if (strcmp(key, aux_node->key) == 0)
			break;
		aux_node = aux_node->next;
	}
	if (aux_node == NULL)
		return (NULL);
	return (aux_node->value);
}
