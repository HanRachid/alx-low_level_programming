#include <stdlib.h>
#include <string.h>
#include "header.h"

/**
 * init_dog - initializes struct of type dog
 * @d: an instance of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
