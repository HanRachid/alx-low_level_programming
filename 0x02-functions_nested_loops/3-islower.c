#include "main.h"
/**
 * _islower - checks if character is lowercase
 * @c: int, ascii value of char
 * Return: Returns 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	return (0);
}
