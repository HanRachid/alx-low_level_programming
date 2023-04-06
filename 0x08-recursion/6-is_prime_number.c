/**
 * is_prime_helper - helper for is_prime_number
 * @n: number to check
 * @div: numbers to divide n by
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_helper(int n, int div)
{
	if (n == 1)
	{
		return (0);
	}

	else if (n <= 0)
	{
		return (0);
	}

	else if (div >= 2)
	{
		if (n % div == 0)
		{

			return (0);
		}
		else
		{
			return (1 * is_prime_helper(n, div - 1));
		}
	}

	return (1);
}

/**
 * is_prime_number - checks if number is prime
 * @n: number to check
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int div = n - 1;

	return (is_prime_helper(n, div));
}
