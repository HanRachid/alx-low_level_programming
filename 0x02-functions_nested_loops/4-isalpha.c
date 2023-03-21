#include "main.h"
/**
 * _isalpha - checks if character is lowercase or uppercase
 * @c: int to get ascii value of char
 * Return: Returns 1 if lowercase or uppercase, 0 otherwise
 */
int _alpha(int c)
{
	if (c =< 'z' && c => 'a')
		return (1);
	if (c =< 'Z' && c => 'A')
		return (1);
	return (0);
}
