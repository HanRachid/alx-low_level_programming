#include "main.h"

/**
 * _strlen - returns length of string
 * @s: pointer to the first element of a string
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;
	char *n = s;

	while (*n != '\0')
	{
		i++;
		n++;
	}
	return (i);
}
