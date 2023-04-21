#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints all numbers
 * @separator: separator
 * @n: number of arguments passed to function
 * @...: arguments to print
 *
 * Return: the sum of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (!separator)
		return;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{

		if (i == n - 1)
			printf("%d\n", va_arg(ap, int));
		else
			printf("%d%s", va_arg(ap, int), separator);
	}

	va_end(ap);
}
