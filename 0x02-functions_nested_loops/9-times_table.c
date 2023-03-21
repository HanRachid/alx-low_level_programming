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
		putchar('0');
		putchar(',');
		for (m = 1; m < 10; m++)
		{
			int number = h * m;

			if (number / 10 > 0)
			{
				putchar(' ');
				putchar(' ');
				putchar('0' + number / 10);
				putchar('0' + number % 10);
				putchar(',');
			}
			else
			{
				putchar(' ');
				putchar(' ');
				putchar(' ');
				putchar('0' + number);
				putchar(',');
			}
		}
		putchar('\n');
	}
}
