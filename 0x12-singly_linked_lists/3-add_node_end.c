#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end- add node to list end
 * @head: pointer to address of head node
 * @str: pointer to str
 * Return: address to new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *currentnode, *ptrhead;

	if (head == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);
	currentnode = malloc(sizeof(list_t));
	if (currentnode == NULL)
		return (NULL);
	currentnode->str = strdup(str);
	currentnode->len = strlen(str);
	currentnode->next = NULL;
	if (*head == NULL)
		*head = currentnode;
	else
	{
		ptrhead = *head;
		while (ptrhead->next != NULL)
			ptrhead = ptrhead->next;
		ptrhead->next = currentnode;
	}
	return (currentnode);
}

