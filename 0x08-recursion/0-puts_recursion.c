#include <stdio.h>
#include <string.h>
/**
 * _puts_recursion - prints a string
 * @s: pointer to the first element of string
 * Return: void
 */

void _puts_recursion(char *s)
{
	char *d = s;

	if (*d != '\0')
	{
		putchar(*d);
		d++;
		_puts_recursion(d);
	}
	else
		putchar('\n');
}
