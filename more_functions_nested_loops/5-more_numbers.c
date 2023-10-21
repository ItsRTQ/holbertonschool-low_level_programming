#include "main.h"
/**
* more_numbers - it starts the program
* Description - counts 0-14 followed by a newline, 10 times
* Return: void doesnt return
*/
void more_numbers(void)
{
	int a;
	int b;
	int firstInt;

	for (b = 0; b <= 10; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			printVal = a;
			if (a > 9)
			{
				firstInt = (a / 10);
				_putchar('0' + firstInt);
				printVal = (a % 10);
			}
			_putchar('0' + (a % 10));
		}
	_putchar('\n');
	}
}
