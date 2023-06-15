#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * dlistint_len - prints number of elements on a dl list
 * @h: doubly linked list
 * Return: size of list
 */
size_t dlistint_len(const dlistint_t *h)

{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
