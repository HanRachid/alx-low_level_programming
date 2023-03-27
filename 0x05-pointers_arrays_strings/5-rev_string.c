#include <string.h>
#include "main.h"

/**
 * rev_string - reverses string
 * @s: pointer to the first element of a string
 * Return: void
 */

void rev_string(char *s)
{
	char *n = s;
	char *m = s;
	int i;
	int len =  strlen(n);

	n = n + len;
	for (i = 0; i < len; i++)
	{
		*m = *n;
		m++;
		n--;
	}
}
