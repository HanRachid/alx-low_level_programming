/**
 * _pow_recursion - returns power or -1 if number is negative
 * @x: number to find the power of
 * @y: the power which we want to raise to
 * Return: the result of the factorial
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
