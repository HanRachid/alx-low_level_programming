#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all combination of two double digits
 *
 * Return: always 0
 */
int main(void)
{
	int numbera = 0, numberb = 0, numberc = 0, numberd = 1;

	while (numbera <= 9)
	{
		while (numberb <= 9)
		{
			while (numberc <= 9)
			{
				while (numberd <= 9)
				{

					putchar('0' + numbera);
					putchar('0' + numberb);
					putchar(' ');
					putchar('0' + numberc);
					putchar('0' + numberd);
					if (numbera != 9 || numberb != 8 || numberc != 9 || numberd != 9)
					{
						putchar(',');
						putchar(' ');
					}
					numberd++;
				}
				numberc++;
				if (numbera != numberc)
					numberd = 0;
				else
					numberd = 1;
			}
			numberb++;
			numberd = numberb + 1;
			numberc = numbera;
		}
		numbera++;
		numberb = 0;
	}
	putchar('\n');
	return (0);
}
