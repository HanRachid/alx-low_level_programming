#include <string.h>
// #include "main.h"
/**
 * _strncpy - copies a number of elements from str to another string
 * @dest: pointer to the first element of destination string
 * @src: pointer to the first element of source string
 * @n: number of chars at most copied
 * Return: pointer to resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	while (i < n)
	{
		i++;
		if (*src != '\0')
			*ptr++ = *src++;
	}
	*ptr = *src;
	return (dest);
}
