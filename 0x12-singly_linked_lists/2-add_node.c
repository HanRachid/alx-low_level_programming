#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node- add node to list
 * @head: pointer to address of head node
 * @str: pointer to str
 * Return: address to new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	char *dup = strdup(str);

	if (!str)
		return (NULL);
	node->str = dup;
	node->len = strlen(dup);
	node->next = *head;

	*head = node;

	return (node);
}
