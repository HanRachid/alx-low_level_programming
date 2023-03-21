#include "main.h"
/**
 * print_alphabet - prints all character from a to z
 *
 * Return: Returns nothing (void)
 */
void print_alphabet(void)
{
	char character = 'a';
	while (character <= 'z')
		{
			_putchar(character);
			character++;
		}
	_putchar('\n');
}
