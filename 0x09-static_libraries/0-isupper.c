#include "main.h"

/**
 * _isupper - checks if parameter is uppercase in ascii table
 *@c: integer to check
 * Return: 1 if parameter is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
