/**
 * print_name - prints name onto function passed in parameters
 * @name: name to print
 * @f: pointer to function to execute
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	void (*fun_ptr)(char *) = f;

	(*fun_ptr)(name);
}
