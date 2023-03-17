#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/** 
 * main function containing algorithms to check random number's sign
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("0 is zero");
	}
	printf("\n");
	return (0);
}
