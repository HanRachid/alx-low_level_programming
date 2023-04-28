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
	list_t *node;
	char *dup;

	if (str == NULL)
		return (NULL);
	if (strlen(str) == 0)
		return (NULL);
	dup = strdup(str);
	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	node->str = dup;
	node->len = strlen(dup);
	node->next = *head;
	*head = node;
	return (node);
}
