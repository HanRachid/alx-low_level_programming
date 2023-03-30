#include <string.h>
#include "main.h"
/**
 * reverse_array - prints array of ints in reverse
 * @a: pointer to the first element of array
 * @n: size of array
 * Return: void
 */
void reverse_array(int *a, int n)
{

	int mid = n / 2;
	int temp1;
	int temp2;
	int i;

	for (i = 0; i < mid; i++)
	{

		temp1 = *a;
		a += n - 2 * i - 1;
		temp2 = *a;
		*a = temp1;
		a -= n - 2 * i - 1;
		*a = temp2;
		a += 1;
	}
}
