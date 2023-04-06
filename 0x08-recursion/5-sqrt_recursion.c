/**
 * _sqrt_recursion_helper - returns square root of number
 * @n: number to find the square root of
 * @div: numbers to parse
 * Return: the square root of n
 */

int _sqrt_recursion_helper(int n, int div)
{

	if (div < n)
	{
		if (div * div == n)
			return (div);
		else if (div == 1)
		{
			return (-1);
		}
		return (_sqrt_recursion_helper(n, div + 1));
	}

	return (-1);
}

/**
 * _sqrt_recursion - returns square root of number
 * @n: number to find the square root of
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	int div = 2;

	if (n < 1)
	{
		return (-1);
	}
	else if (n == 1)
		return (1);
	return (_sqrt_recursion_helper(n, div));
}
