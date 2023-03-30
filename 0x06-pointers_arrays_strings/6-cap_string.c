#include <string.h>
#include "main.h"
/**
 * cap_string - capitalizes letters in str
 * @str: pointer to the first element of string
 * Return: capitalized str
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t'
		|| str[i] == '\n' || str[i] == ',' || str[i] == ';' || str[i] == '.'
		|| str[i] == '!' || str[i] == '?'
		|| str[i] == '"' || str[i] == '('
		|| str[i] == ')'
		|| str[i] == '{' || str[i] == '}')
			i += 1;
		if (str[i] && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		while (str[i] && !(str[i] == ' ' || str[i] == '\t'
		|| str[i] == '\n' || str[i] == ',' || str[i] == ';'
		|| str[i] == '.' || str[i] == '!'
		|| str[i] == '?' || str[i] == '"' || str[i] == '('
		|| str[i] == ')' || str[i] == '{' || str[i] == '}'))
			i += 1;
	}
	return (str);
}
