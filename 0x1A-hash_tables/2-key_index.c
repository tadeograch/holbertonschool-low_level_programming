#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
* hash_table_create - function that creates a hash table
* @size: size of the array
* Return: pointer to the newly created hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}