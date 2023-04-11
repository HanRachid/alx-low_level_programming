#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - creates pointer to array and concatenates
 * string from parameters into it
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: pointer to new array
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, i = 0;
	char *ptr1 = "", *ptr2 = "", *arr;

	if (s1 != NULL)
	{
		ptr1 = s1;
		size1 = strlen(s1);
	}
	if (s2 != NULL)
	{
		ptr2 = s2;
		size2 = strlen(s2);
	}

	arr = malloc(sizeof(char) * size1 + sizeof(char) * size2 + 1);
	if (!arr)
		return (NULL);
	while (*ptr1 != '\0')
	{
		arr[i++] = *ptr1++;
	}
	while (*ptr2 != '\0')
	{
		arr[i++] = *ptr2++;
	}
	arr[i++] = '\0';
	return (arr);
}
