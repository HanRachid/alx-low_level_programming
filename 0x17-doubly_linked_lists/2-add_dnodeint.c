#include "lists.h"
#include <stdio.h>
/**
 * add_dnodeint - add node to head of dll
 * @head: address to head
 * @n: value of node
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (head)
	{
		new = malloc(sizeof(*new));
		if (new)
		{
			new->n = n;
			new->prev = NULL;
			new->next = *head;
			if (*head)
				(*head)->prev = new;
			*head = new;
		}
		else
			return (NULL);
		return (new);
	}
	return (NULL);
}
