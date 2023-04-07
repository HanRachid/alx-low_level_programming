#include <string.h>
#include <stdio.h>

/**
 * main - prints name of compiled file from this program
 * @argc: number of parameters passed to the command line
 * @argv: array of pointers to the parameters
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
