/**
 * _strlen_recursion - returns length of string
 * @s: pointer to the first element of string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	char *d = s;

	if (*d != '\0')
	{
		d++;
		return (1 + _strlen_recursion(d));
	}
	return (0);
}
