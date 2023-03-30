#include <string.h>
#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: pointer to the first element of string
 * Return: encoded string
 */

char *leet(char *str)
{
	char encoding[255];
	bool init = false;
	int i = 0;

	if (!init)
	{
		encoding['a'] = '4';
		encoding['A'] = '4';
		encoding['e'] = '3';
		encoding['E'] = '3';
		encoding['o'] = '0';
		encoding['O'] = '0';
		encoding['t'] = '7';
		encoding['T'] = '7';
		encoding['l'] = '1';
		encoding['L'] = '1';
		init = true;
	}

	while (str[i])
	{
		char c = (char)str[i];


		if (encoding[c])
		{
			str[i] = encoding[c];
		}
	}

	return (str);
}
