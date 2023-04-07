#include <string.h>
#include <stdio.h>

/**
 * main - prints name of all parameters
 * @argc: number of parameters passed to the command line
 * @argv: array of pointers to the parameters
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
