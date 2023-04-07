#include <string.h>

/**
 * main - prints product of 2nd and 3rd argument
 * @argc: number of parameters passed to the command line
 * @argv: array of pointers to the parameters
 * Return: 0 if there are 2 arguments passed to command, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i;
	int prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		prod = (*argv[1]) * (*argv[2]);
	printf("%d\n", prod);
	return (0);
}
