#include "main.h"
/**
* print_most_numbers - it starts the program
* Description - prints numbers from 0-9 avoiding 2 and 4
* Return: its void doesnt return
*/
void print_most_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a != 2 && a != 4)
		{
			_putchar('0' + a);
		}
	}
	_putchar('\n');
}
