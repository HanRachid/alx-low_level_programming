#include "main.h"
/**
 * puts2 - prints every other char
 * @str: pointer to the first element of a string
 * Return: void
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		if (*str != '\0')
			str++;
	}
	_putchar('\n');
}
