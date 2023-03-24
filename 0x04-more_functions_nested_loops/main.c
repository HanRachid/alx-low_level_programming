#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main()
{
	_putchar('a');
	_putchar('\n');
	print_diagonal(5);
	print_diagonal(3);
	_putchar('\n');
	return (0);
}
