/**
 * _sqrt_recursion - returns square root of number
 * @n: number to find the square root of
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	int div = 1;

	if (n > 0)
	{
		while (div <= n)
		{
			if (div * div == n)
			{
				return (div);
			}
			div++;
		}
	}
	return (-1);
}
