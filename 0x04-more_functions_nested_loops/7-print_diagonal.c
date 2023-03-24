#include "main.h"
/**
 * print_diagonal - prints a lign of n length
 * @n: number of lines to print
 * Return: void
 */
void print_diagonal(int n)
{
	int a;
	int b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
