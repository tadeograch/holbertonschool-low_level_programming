#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
* hash_table_set - function that adds an element to the hash table
* @ht: hash table
* @key: key of the new element
* @value: value of the key
* Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL;
	hash_node_t *aux_node = NULL;

	if (!key || !value || !ht || strlen(key) == 0)
	{
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	aux_node = (ht->array)[index];
	while (aux_node != NULL)
	{
		if (strcmp(key, aux_node->key) == 0)
		{
			free(aux_node->value);
			aux_node->value = strdup(value);
			return (0);
		}
		aux_node = aux_node->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(new_node);
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	if ((ht->array)[index] == NULL)
	{
		(ht->array)[index] = new_node;
	}
	else
	{
		new_node->next = (ht->array)[index];
		(ht->array)[index] = new_node;
	}
	return (1);
}
