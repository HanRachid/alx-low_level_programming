#include <stdlib.h>
#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
/**
 * hash_table_get - search in hash table
 * @ht: hash table to search from
 * @key: key of element to find
 * Return: element found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	int index = key_index((const unsigned char *)key, ht->size);

	current = (hash_node_t *)calloc(ht->size, sizeof(hash_node_t));
	if (ht->array[index] == NULL)
		return (NULL);
	current = ht->array[index];

	return (current->value);
}
