#include "main.h"
/**
 * puts_half - prints half of string
 * @str: pointer to the first element of a string
 * Return: void
 */

void puts_half(char *str)
{
	int len;
	int mid;

	len = strlen(str);
	mid = (len - len % 2) / 2;
	str += mid;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
