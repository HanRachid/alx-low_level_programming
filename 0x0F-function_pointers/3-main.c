#include <stdlib.h>
#include <stdio.h>
#include "calc.h"

/**
 * main - executes operation into 2 int
 * @argc: number of args
 * @argv: array of the args
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		printf("ERROR\n");
		exit(98);
	}
	if (!get_op_func(argv[2]))
	{
		printf("ERROR\n");
		exit(99);
	}
	if ((*argv[2] == '%' || *argv[2] == '/') && atoi(argv[3]) == 0)
	{
		printf("ERROR\n");
		exit(100);
	}
	result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}

