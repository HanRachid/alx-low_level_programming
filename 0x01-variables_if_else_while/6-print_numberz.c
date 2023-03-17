#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all numbers from 0 to 9 wihout initializing
 * a char followed by a newline
 *
 * Return: always 0
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar('0' + digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
