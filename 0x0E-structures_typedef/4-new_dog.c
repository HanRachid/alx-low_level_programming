#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
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
	if (dog->name)
		dog->name = strdup(name);
	if (dog->owner)
		dog->owner = strdup(name);
	dog->age = age;

	return (dog);
}

int main()
{
	dog_t *my_dog;
	my_dog = new_dog("Poppy", 3.5, "Bob");
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
	return (0);
}
