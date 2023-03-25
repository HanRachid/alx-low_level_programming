#include <stdio.h>

/**
 * main - Prints biggest prime factor of 612852475143
 *
 * Return: 0
 */

int main(void)
{
	long int i = 2;
	long int currentfactor = 1;
	long int factorized = 612852475143;

	while (i < factorized / currentfactor)
	{
		i++;
		if (factorized % i == 0)
		{
			currentfactor = i;
		}
	}
	printf("%ld\n", i);
	return (0);
}
