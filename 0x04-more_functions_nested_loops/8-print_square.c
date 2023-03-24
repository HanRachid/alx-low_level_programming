#include "main.h"

/**
 * print_square - print a square made of # of size @size
 * @size: size of square
 */

void print_square(int size)
{
	int i,j;

	if (size > 0)
	{
		for (i = 1; i < j; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
