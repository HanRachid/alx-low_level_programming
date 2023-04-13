#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - checks if malloc succeeds
 * @b: size of memory to allocate
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
