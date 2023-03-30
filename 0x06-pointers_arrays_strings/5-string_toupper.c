#include <string.h>
#include "main.h"
/**
 * string_toupper - converts str to uppercase
 * @str: pointer to the first element of string
 * Return: str
 */
char *string_toupper(char *str)
{

	int size = strlen(str);
	char *ptr = str;
	int i;

	for (i = 0; i < size; i++)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr -= 32;
		ptr++;
	}
	return (str);
}
