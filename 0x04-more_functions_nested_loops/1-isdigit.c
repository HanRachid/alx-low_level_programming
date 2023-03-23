#include "main.h"

/**
 * _isdigit - checks if parameter is a digit (0-9)
 *
 * Return: 1 if parameter is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	char b = '0' + c;

	if (b >= '0' && b <= '9')
	{
		return (1);
	}
	return (0);
}
