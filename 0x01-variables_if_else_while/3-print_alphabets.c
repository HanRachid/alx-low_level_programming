#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all alphabet lowercase then uppercase followed by a newline
 *
 * Return: always 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	letter = 'A';
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
