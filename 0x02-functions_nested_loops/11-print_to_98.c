#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all numbers from starting number to 98
 *@n: number from which we start printing until 98
 * Return: void
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}

	if (n == 98)
		printf("%d", n);
}
