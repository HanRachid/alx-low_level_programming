#include "main.h"

/**
 * _isdigit - checks if parameter is a digit (0-9)
 * @c: integer to check
 * Return: 1 if parameter is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if ('0' + c >= '0' && '0' + c <= '9')
	
		return (1);
	
	return (0);
}
