#include <string.h>
#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: pointer to the first element of a string
 * Return: void
 */

void print_rev(char *s)
{
	char *n = s;
	int i;
	int len = strlen(n);

	n = n + len - 1;
	for (i = 0; i <= len; i++)
	{
		_putchar(*n);
		n--;
	}
	_putchar('\n');
}
