#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all alphabet in reverse and lowercase
 *
 * Return: always 0
 */
int main(void)
{
	int number = 0;

	while (number < 9)
	{
		putchar('0' + number);
		if (number != 9)
		{
		putchar(',');
		putchar(' ');
		}
		number++;
	}
	putchar('9');
	return (0);
}
