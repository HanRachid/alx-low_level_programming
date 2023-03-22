#include "main.h"
/**
 * print_sign - checks if character is lowercase or uppercase
 * @n: int to check sign of
 * Return: Returns 1 if positive, -1 if negative, 0 if 0;
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if  (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
