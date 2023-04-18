#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates instance of dog_t
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 *
 * Return: returns instance of dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc((sizeof(dog_t)));
	if (!dog)
		return (NULL);
	dog->name = strdup(name);
	dog->age = age;
	dog->owner = strdup(owner);

	return (dog);
}
