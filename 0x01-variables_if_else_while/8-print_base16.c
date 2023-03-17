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
	char letter = '0';

	while (letter <= '9')
	{
		putchar(letter);
		letter++;
	}
	letter = 'a';
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
