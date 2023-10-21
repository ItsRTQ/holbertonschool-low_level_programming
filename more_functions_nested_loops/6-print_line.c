#include "main.h"
/**
* print_line - it starts the program
* @n: recive a value
* Description - prints a line with lenght of n
* Return: void, doesnt return
*/
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
