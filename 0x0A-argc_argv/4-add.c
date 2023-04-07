#include <string.h>

/**
 * main - prints sum of all parameters apart from first
 * @argc: number of parameters passed to the command line
 * @argv: array of pointers to the parameters
 * Return: 0 if the parameters contain only numerals, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i;
	char *ptr;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		ptr = argv[i];
		while (*ptr != '\0')
		{
			if (*ptr > '9' || *ptr < '0')
			{
				printf("Error\n");
				return (1);
			}
			ptr++;
		}
		sum += *argv[i];
	}

	printf("%d\n", sum);
	return (0);
}
