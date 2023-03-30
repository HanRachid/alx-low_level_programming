#include <string.h>
#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer to the first element of destination string
 * @s2: pointer to the first element of source string
 * Return: 1 if the first different character found char is >, -1 if <, 0 if
 * strings are the same
 */

int _strcmp(char *s1, char *s2)
{
	int size = strlen(s1);

	for (int i = 0; i < size; i++)
	{
		if (*s1 > *s2)
			return (1);
		else if (*s2 > *s1)
			return (-1);
		s1++, s2++;
	}
	return (0);
}
