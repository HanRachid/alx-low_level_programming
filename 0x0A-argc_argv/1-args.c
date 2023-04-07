#include <string.h>
#include <stdio.h>
/**
 * main - prints number of arguments passed to this program
 * @argc: number of parameters passed to the command line
 * @argv: array of pointers to the parameters
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", (argc - 1));
	(void)argv;
	return (0);
}
