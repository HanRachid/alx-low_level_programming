#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints list according to format
 * @h : pointer to list_t instance
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodecount = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		nodecount++;
	}

	return (nodecount);
}

