#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
* hash_table_create - function that creates a hash table
* @size: size of the array
* Return: pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **new_arr = NULL;
	hash_table_t *new_ht = NULL;

	new_ht = malloc(sizeof(hash_table_t));
	new_arr = malloc(sizeof(hash_node_t *) * size);
	if (!new_arr | !new_ht)
	{
		free(new_arr);
		free(new_ht);
		return (NULL);
	}
	new_ht->size = size;
	new_ht->array = new_arr;
	return (new_ht);
}
