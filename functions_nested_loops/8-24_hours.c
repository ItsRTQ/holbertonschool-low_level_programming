#include "main.h"
/**
 * jack_bauer - starts the program
 * Description - prints all the hours of the day starting from 00:00
 * Return: is void, doesnt return anything
 */
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;
	int e = 9;

	for (a = 0; a <= 2; a++)
	{
		if (a >= 2)
		{
			e = 3;
		}
		for (b = 0; b <= e; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					_putchar('0' + a);
					_putchar('0' + b);
					_putchar(58);
					_putchar('0' + c);
					_putchar('0' + d);
					_putchar('\n');
				}
			}
		}
	}
}
