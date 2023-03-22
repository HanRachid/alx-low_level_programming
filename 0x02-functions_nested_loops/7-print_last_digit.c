#include "main.h"
#include <limits.h>
/**
 * print_last_digit - get last digit of int
 * @n: int to get last digit of
 * Return: Returns int
 */
int print_last_digit(int n)
{
	int m;

	if (n == INT_MIN)
	{
		_putchar('0' + 8);
		return (8);
	}
	if (n < 0)
	{
		m = -n;
		m = m % 10;
		_putchar('0' + m);
		return (m % 10);
	}
	m = n % 10;
	_putchar('0' + m);
	return (n % 10);
}
