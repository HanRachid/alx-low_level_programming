#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sums all arguments of function
 * @n: number of arguments passed to function
 * @...: arguments to sum
 *
 * Return: the sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	if (n == 0)
		return (0);
	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int); /* Get the next argument value. */

	va_end(ap); /* Clean up. */
	return (sum);
}
