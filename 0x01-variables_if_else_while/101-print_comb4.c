#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all unique combinations of 2 digits
 *
 * Return: always 0
 */
int main(void)
{
	int numbera = 0;
	int numberb = 0;
	int numberc = 0;

	while (numbera <= 9)
	{
		while (numberb <= 9)
		{
			while (numberc <= 9)
			{
				if (numberb != numbera && numberb != numberc)
				{
					putchar('0' + numbera);
					putchar('0' + numberb);
					putchar('0' + numberc);
					if (numbera != 7 || numberb != 8 || numberc != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
				numberc++;
			}
			numberb++;
			numberc = numberb;
		}
		numbera++;
		numberb = numbera;
	}
	putchar('\n');
	return (0);
}
