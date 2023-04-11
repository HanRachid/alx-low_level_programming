#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - initiates array of size size*
 * @size: size of array
 * @c: char to fill array with
 * Return: pointer to first element to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);
	int i;

	if (size == 0)
		return (NULL);
	if (!arr)
		return (NULL);
	for (i = 0; i < (int)size; i++)
		arr[i] = c;
	return (arr);
}
