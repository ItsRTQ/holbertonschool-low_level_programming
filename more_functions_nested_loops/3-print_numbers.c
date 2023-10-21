#include "main.h"
/**
* print_numbers - it starts the program
* Description - prints numbers 0-9 and then make a new line
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
