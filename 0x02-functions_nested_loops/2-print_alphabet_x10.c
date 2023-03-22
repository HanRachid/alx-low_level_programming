#include "main.h"
/**
 * print_alphabet_10 - prints all character from a to z 10 times
 *
 * Return: Returns nothing (void)
 */
void print_alphabet_x10(void)
{
	char character = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		while (character <= 'z')
		{
			_putchar(character);
			character++
		}
		_putchar('\n');
		character = 'a';
	}
}
