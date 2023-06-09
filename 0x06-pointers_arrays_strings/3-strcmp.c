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
	int i;

	for (i = 0; i < size; i++)
	{
		if (*s1 > *s2)
			return (15);
		else if (*s2 > *s1)
			return (-15);
		s1++, s2++;
	}
	return (0);
}
