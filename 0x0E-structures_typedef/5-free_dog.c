#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * free_dog - frees instance of dog_t from memory
 * @d: instance of dog_t
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
