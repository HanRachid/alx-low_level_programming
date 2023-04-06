#include <string.h>

/**
 * is_palindrome_helper - helper to check if str is palindrome
 * @s: first pointer to str
 * @d: second pointer to str
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome_helper(char *s, char *d)
{

	if (*d != '\0')
	{
		if (*d != *s)
			return (0);
		d++;
		s--;
		is_palindrome_helper(s, d);
	}
	return (1);
}

/**
 * is_palindrome - check if str is palindrome
 * @s: pointer to str
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	char *d = s;

	s = s + strlen(s) - 1;
	return (is_palindrome_helper(s, d));
}
