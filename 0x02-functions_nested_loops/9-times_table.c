#include "main.h"
/**
 * times_table - prints the 9 time table
 *
 * Return: void
 */
void times_table(void)
{
	int h;
	int m;

	for (h = 0; h < 10; h++)
	{	
		int number;

		_putchar('0');
		_putchar(',');
		for (m = 1; m < 9; m++)
		{
			number = h * m;

			if (number / 10 > 0)
			{
				_putchar(' ');
				_putchar('0' + number / 10);
				_putchar('0' + number % 10);
				_putchar(',');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + number);
				_putchar(',');
			}
		}
		if ((number + h) / 10 > 0)
		{
			_putchar(' ');
			_putchar('0' + number / 10);
			_putchar('0' + number % 10);
		}
		else
		{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + number);
		}
		_putchar('\n');
	}
}
