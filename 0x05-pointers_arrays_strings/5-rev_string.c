#include <string.h>
#include "main.h"

/**
 * rev_string - reverses string
 * @s: pointer to the first element of a string
 * Return: void
 */

void rev_string(char *s)
{
	int size = strlen(s) - 1;
	int mid = strlen(s) / 2;
	int temp1, temp2;
	int i;

	for (i = 0; i < mid; i++)
	{

		temp1 = *s;

		s += size - 2 * i - 1;
		temp2 = *s;

		*s = temp1;
		s -= size - 2 * i - 1;
		*s = temp2;
		s += 1;
	}
}
