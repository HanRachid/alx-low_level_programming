#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_array - prints ints from array
 * @a: pointer to the first element of array
 * @n: size of array
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *a);
		if (i != n - 1)
			printf(", ");
		a++;
	}
	_putchar('\n');
}
