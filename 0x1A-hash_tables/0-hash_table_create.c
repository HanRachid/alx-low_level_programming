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
	htable->array = (hash_node_t **)calloc(htable->size, sizeof(hash_node_t *));

	for (i = 0; i < htable->size; i++)
	{
		htable->array[i] = NULL;
	}
	return (htable);
}
/**
 * hash_function - generates key from value
 * @value: value to turn into hash key
 * @size: limit of value of key
 * Return: generated hashkey
 */
int hash_function(char *value, int size)
{
	int key = 0;

	while (*value != '\0')
	{
		key += *value++;
	}
	return (key % size);
}
