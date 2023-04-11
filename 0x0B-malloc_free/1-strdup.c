#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - creates pointer to array and copies string from parameter into it
 * @str: pointer to string
 * Return: pointer to new array
 */
char *_strdup(char *str)
{
	int size;
	char *arr;
	char *ptr;
	int i = 0;

	if (str == NULL)
		return (NULL);
	size = strlen(str);
	arr = malloc(sizeof(char) * size);
	ptr = str;
	if (!arr)
		return (NULL);
	while (*ptr != '\0')
	{
		arr[i++] = *ptr++;
	}
	return (arr);
}
