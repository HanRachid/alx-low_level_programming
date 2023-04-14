#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - checks if malloc succeeds
 * @s1: first str
 * @s2: second str
 * @n : number of bytes of s2 to allocate
 * Return: void
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i = 0;
	int len = strlen(s1);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > strlen(s2))
	{
		ptr = malloc(sizeof(s1) + sizeof(s2));
	}
	else
	{

		ptr = malloc(sizeof(s1) + n * sizeof(char));
	}
	while (*s1 != '\0')
	{
		ptr[i] = *s1;
		s1++, i++;
	}
	i = 0;
	while (*s2 != '\0' && i < (int)n)
	{
		ptr[i + len] = *s2;
		s2++, i++;
	}

	ptr[i + len] = '\0';
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
