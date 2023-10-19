#include "main.h"
/**
 * times_table - starts the function
 * Description - print the times tables fo 0 to 9
 * Return: is void, doenst return
 */
void times_table(void)
{
	int total;
	int tabla;
	int por;
	int firstInt;
	int comma;

	for (por = 0; por <= 9; por++)
	{
		for (tabla = 0; tabla <= 9; tabla++)
		{
			comma = 44;
			if (tabla == 9)
			{
				comma = 10;
			}
			total = (por * tabla);
			if (total > 9)
			{
				firstInt = (total / 10);
				total = (total % 10);
				_putchar('0' + firstInt);
				_putchar('0' + total);
				_putchar(comma);
			}
			else if (tabla == 0)
			{
				_putchar('0' + total);
				_putchar(comma);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + total);
				_putchar(comma);
			}
		}
	}
}
