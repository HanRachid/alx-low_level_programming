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

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	current = (hash_node_t *)calloc(ht->size, sizeof(hash_node_t));
	if (ht->array[index] == NULL)
		return (NULL);
	current = ht->array[index];
	while (current && strcmp(current->key, key) != 0)
		current = current->next;
	return ((current == NULL) ? NULL : current->value);
}
