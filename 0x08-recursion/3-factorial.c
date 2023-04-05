/**
 * factorial - returns factorial or -1 if number is negative
 * @n: number's factorial
 * Return: the result of the factorial
 */

int factorial(int n)
{

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
