#include "main.h"

/**
 * _print_rev - prints string in reverse
 * @s: pointer to the first element of a string
 * Return: void
 */

void print_rev(char *s)
{
	char *n = s;
	int i;
	int len = _strlen(n);

	n = n + len;
	for (i = 0; i < len; i++)
	{
		_putchar(*n);
		n--;
	}
	_putchar('\n');
}
