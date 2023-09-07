#include <stdlib.h>
#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
/**
 * hash_table_set - adds element to hash table
 * @ht: element to add to table
 * @key: key of element to add
 * @value: value of element to add
 * Return: 1 if succeeded, 0 else.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	hash_node_t *new;
	int index;

	if (*key == NULL || value == NULL || ht == NULL || key == NULL)
		return (0);
	new = (hash_node_t *)malloc(sizeof(hash_node_t));

	index = key_index((unsigned char *)key, ht->size);
	new->key = strdup(key);
	new->value = strdup(value);
	if (ht->array[index] != NULL)
	{

		if (strcmp(ht->array[index]->key, new->key) != 0)
		{
			new->next = ht->array[index];
		}
	}
	new->key = strdup(key);
	new->value = strdup(value);
	ht->array[index] = new;

	return (1);
}
