#include "main.h"
/**
* print_triangle - it starts the program
* @size: recive size
* Description - prints a tringle with lenght of size
* Return: void doesnt return
*/
void print_triangle(int size)
{
	int x, y, outPut, spaces;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
			{
				spaces = (size - (x + (y + 1)));
				outPut = 35;
				if (spaces > 0)
				{
					outPut = 32;
				}
				_putchar(outPut);
			}
			_putchar('\n');
		}
	}
}
