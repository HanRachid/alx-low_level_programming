#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints sum of all parameters apart from first
 * @argc: number of parameters passed to the command line
 * @argv: array of pointers to the parameters
 * Return: 0 if the parameters contain only numerals, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]);
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins += cents / 25;
	cents = cents % 25;
	coins += cents / 10;
	cents = cents % 10;
	coins += cents / 5;
	cents = cents % 5;
	coins += cents / 2;
	cents = cents % 2;
	coins += cents;

	printf("%d\n", coins);
	return (0);
}
