#include "main.h"

/**
 * _puts - prints char until \0 char is encountered
 * @s: pointer to the first element of a string
 * Return: void
 */

void _puts(char *str)
{
	char *n = str;

	while (*n != '\0')
	{
		_putchar(*n);
		n++;
	}
	_putchar('\n');
}
