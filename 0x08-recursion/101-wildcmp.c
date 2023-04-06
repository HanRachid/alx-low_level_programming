#include <stddef.h>

/**
 * _help - helper function for wildcmp
 * @s1: first str
 * @s2: second str
 * Return: 1 if same, 0 otherwise
 */

int _help(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s2 == '*')
	{

		if (*s1 == '\0')
		{
			return (_help(s1, s2 + 1));
		}

		return (_help(s1, s2 + 1) || _help(s1 + 1, s2 + 1) || _help(s1 + 1, s2));
	}
	else
	{

		if (*s1 != *s2)
		{
			return (0);
		}

		return (_help(s1 + 1, s2 + 1));
	}
}

/**
 * wildcmp - checks if strings are the same with wildcards on second string
 * @s1: first str
 * @s2: second str
 * Return: 1 if same, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (s1 == NULL || s2 == NULL)
	{
		return (0);
	}

	return (_help(s1, s2));
}
