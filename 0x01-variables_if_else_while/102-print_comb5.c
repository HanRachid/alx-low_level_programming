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
	int numberc = 0;
	int numberd = 0;

	while (numbera <= 9)
	{
		while (numberb <= 9)
		{
			while (numberc <= 9)
			{
				while (numberd <= 9)
				{

					if (numbera != numberc || numberb != numberd)
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
					}
					numberd++;
				}
				numberc++;
				numberd = 0;
			}
			numberb++;
			numberd = numberb;
			numberc = numbera;
		}
		numbera++;
		numberb = 0;
	}
	putchar('\n');
	return (0);
}
