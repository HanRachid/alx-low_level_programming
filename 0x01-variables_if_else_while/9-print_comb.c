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
	char number = '0';

	while (number <= '9')
	{
		putchar(number);
		putchar(',');
		putchar(' ');
		number++;
	}
	putchar('\n');
	return (0);
}
