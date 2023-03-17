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
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
