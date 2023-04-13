#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

/**
 * malloc_checked - checks if malloc succeeds
 * @b: size of memory to allocate
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
		exit(98);
	return (malloc(b));
}
