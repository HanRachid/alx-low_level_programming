#include "main.h"
/**
 * more_numbers - prints all numbers from 0 to 14, 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int a;

	for (a = 0; a <= 14; a++)
	{
		_putchar('0' + a);
		if (a == 14)
			_putchar('\n')
	}
	_putchar('\n');
}
