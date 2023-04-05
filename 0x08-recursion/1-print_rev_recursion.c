#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the first element of string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	char *d = s;

	if (*d != '\0')
	{
		d++;
		_print_rev_recursion(d);

		putchar(*s);
	}
}
