#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all alphabet in reverse and lowercase
 *
 * Return: always 0
 */
int main(void)
{
	int numbera = 0;
	int numberb = 0;

	while (numbera <= 9)
	{
		while (numberb <= 9)
		{
			if (numberb != numbera)
			{
				putchar('0' + numbera);
				putchar('0' + numberb);
				if (numbera != 8 || numberb != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			numberb++;
		}
		numbera++;
		numberb = numbera;
	}
	putchar('\n');
	return (0);
}
