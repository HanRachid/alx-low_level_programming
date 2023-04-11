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
	int size = strlen(str);
	char *arr = malloc(sizeof(char) * size);
	char *ptr = str;
	int i = 0;

	if (size == 0)
		return NULL;
	if (!arr)
		return NULL;
	while (*ptr != '\0')
	{
		arr[i++] = *ptr++;
	}
	return arr;
}
