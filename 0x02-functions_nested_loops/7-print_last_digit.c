#include "main.h"
/**
 * print_last_digit - get last digit of int
 * @n: int to get last digit of
 * Return: Returns int
 */
int print_last_digit(int n)
{
	int m;

	if (m < 0)
	{
		m = -n;
		return ((m % 10) + (10 * (m % 10)));
	}
	return ((n % 10) + (10 * (n % 10)));
}
