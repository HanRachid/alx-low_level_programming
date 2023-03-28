#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcpy - copies string to another string
 * @dest: pointer to the first element of string that should be copied
 * @src: pointer to the first element of string that should receive the copy
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int size = strlen(src);

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
	dest -= size;
	return (dest);
}
