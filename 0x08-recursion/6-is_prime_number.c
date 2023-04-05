/**
 * is_prime_number - checks if number is prime
 * @n: returns
 * Return: the square root
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n == 1)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (0);
	}
	else if (n >= 2)
	{
		while (div < n)
		{
			if (n % div == 0)
			{
				return (0);
			}
			div++;
		}
	}
	return (1);
}
