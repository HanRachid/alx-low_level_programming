/**
 * array_iterator - executes pointed function on each element of array
 * @array: array of elements
 * @size: size of array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	if (!array || !action)
		return;
	for (i = 0; i < (int)size; i++)
	{
		(*action)(*array);
		array++;
	}
}
