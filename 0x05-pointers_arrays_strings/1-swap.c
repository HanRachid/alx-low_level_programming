#include "main.h"

/**
 * swap_int - swaps values of pointed variables
 * @a: pointer to int
 * @b: pointer to int
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
