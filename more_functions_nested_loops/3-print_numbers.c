#include "main.h"
/**
* function - it starts the program
* Description - prints numbers 0-9
* Return: void, doesnt return
*/
void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar('0' + a);
	}
	_putchar('\n');
}
