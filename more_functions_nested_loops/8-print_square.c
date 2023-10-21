#include "main.h"
/**
* print_square - it starts the program
* @size: recive a value
* Description - prints a square with lenght of size
* Return: void, doesnt return
*/
void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (b = 0; b < size; b++)
		{
			for (a = 0; a < size; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
