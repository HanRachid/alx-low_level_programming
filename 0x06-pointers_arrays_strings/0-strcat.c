#include "main.h"
/**
 * _strcat - appends str on top of another string
 * @dest: pointer to the first element of destination string
 * @src: pointer to the first element of source string
 * Return: pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest + ft_strlen(dest);

	while (*src != '\0')
	{

		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
