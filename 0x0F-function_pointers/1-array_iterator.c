#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes pointed function on each element of array
 * @array: array of elements
 * @size: size of array
 * @action: action to perform on elements of array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
	{
		(*action)(*array);
		array++;
	}
}
