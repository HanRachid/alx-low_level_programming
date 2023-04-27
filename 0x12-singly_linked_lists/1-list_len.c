#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <unistd.h>

/**
 * list_len- prints number of elements in a list
 * @h: ptr to list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t nodecount = 0;

	while (h != NULL)
	{
		h = h->next;
		nodecount++;
	}
	return (nodecount);
}

