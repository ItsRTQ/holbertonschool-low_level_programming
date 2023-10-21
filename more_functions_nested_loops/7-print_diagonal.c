#include "main.h"
/**
* print_diagonal - it starts the program
* @n: recive a value
* Description - prints a diagonal line with lenght of n
* Return: void, doesnt return
*/
void print_diagonal(int n)
{
	int y, x;

	if (n > 0)
	{
		for (y = 0; y < n; y++)
		{
			for (x = 0; x < y; x++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
