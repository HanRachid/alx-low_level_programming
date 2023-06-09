#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **arrptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arrptr = malloc(sizeof(int *) * height);

	if (arrptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arrptr[i] = malloc(sizeof(int) * width);
		if (arrptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arrptr[j]);
			free(arrptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arrptr[i][j] = 0;
		}
	}

	return (arrptr);
}
