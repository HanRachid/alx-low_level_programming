#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all numbers from 0 to 9 followed by a newline
 *
 * Return: always 0
 */
int main(void)
{
	char digit = '0';

	while (digit <= '9')
	{

		putchar(digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
