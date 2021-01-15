#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
* hash_table_print - function that prints a hash table
* @ht: hash table
* Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, flag = 0;
	hash_node_t *aux;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		aux = (ht->array)[i];
		while (aux != NULL)
		{
			if (flag == 0)
			{
				printf("'%s': ", aux->key);
				printf("'%s'", aux->value);
				flag = 1;
			}
			else
			{
				printf(", '%s': ", aux->key);
				printf("'%s'", aux->value);
			}
			aux = aux->next;
		}
	}
	printf("}\n");
}
