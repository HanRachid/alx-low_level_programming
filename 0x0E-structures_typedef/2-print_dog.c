#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * print_dog - prints members of dog in structured way
 * @d: an instance of dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (!d->name)
		d->name = "(nil)";
	if (!d->owner)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
