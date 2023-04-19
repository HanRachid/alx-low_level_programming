#include <stdlib.h>

/**
 * print_name - prints name onto function passed in parameters
 * @name: name to print
 * @f: pointer to function to execute
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	(*f)(name);
}
