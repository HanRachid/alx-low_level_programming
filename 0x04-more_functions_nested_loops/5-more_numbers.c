#include "main.h"
/**
 * more_numbers - prints all numbers from 0 to 14, 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			int newJ = j;

			if (j >= 10)
			{
				newJ = newJ % 10;
				_putchar('1');
			}
			_putchar('0' + newJ);
		}
		_putchar('\n');
	}
}
