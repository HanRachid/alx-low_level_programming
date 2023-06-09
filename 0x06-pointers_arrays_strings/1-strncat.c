#include <string.h>
#include "main.h"
/**
 * _strncat - appends a number of elements from str on top of another string
 * @dest: pointer to the first element of destination string
 * @src: pointer to the first element of source string
 * @n: number of chars at most appended
 * Return: pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest + strlen(dest);
	int i = 0;

	while (i < n)
	{
		i++;
		if (*src != '\0')
			*ptr++ = *src++;
	}
	return (dest);
}
