/**
 * int_index - prints index of element that satisfied cmp
 * @array: array of elements
 * @size: size of array
 * @cmp: pointer to function used to compare elements
 * Return: index of found element or -1 if none found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
