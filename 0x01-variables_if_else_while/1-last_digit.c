#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - compares last digit of n with 5
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int lastdig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdig = n % 10;

	if (lastdig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lastdig);
	}
	else if (lastdig < 6 && lastdig != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastdig);
	}
	else if (lastdig == 0)
	{
		printf("Last digit of %d is 0 and is 0", n);
	}
	putchar('\n');
	return (0);
}
