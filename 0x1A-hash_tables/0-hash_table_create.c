#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates hash table
 * @size: size of array
 * Return: the created hashtable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	int i;
	hash_table_t *htable = (hash_table_t *)malloc(sizeof(hash_table_t));

	htable->size = size;
	htable->array = (hash_node_t **)malloc(size * sizeof(hash_node_t *));

	for (i = 0; i < (int)htable->size; i++)
	{
		htable->array[i] = NULL;
	}
	return (htable);
}
