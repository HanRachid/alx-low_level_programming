#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - finds value index using key
 * @key: key to find index of
 * @size: size of array of hash table
 * Return: hash value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
