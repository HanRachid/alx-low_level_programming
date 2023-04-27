#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * prints - prints string
 * @str : pointer to string
 * Return: void
 */

void prints(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}

/**
 * putnbr- prints number
 * @nb : number
 * Return: void
 */

void putnbr(int nb)
{
	int tempnum = nb;
	char c;
	int i = 1;

	while (tempnum > 9)
	{
		tempnum = tempnum / 10;
		i *= 10;
	}

	c = '0' + tempnum;
	_putchar(c);
	if (nb - tempnum * i != 0)
	{
		putnbr(nb - tempnum * i);
	}
}

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

