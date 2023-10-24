#include "main.h"
/**
* puts2 - it starts the program
* @str: recive a value
* Description - prints a string avoiding the next value starting from 0
* Return: void, doesnt return
*/
void puts2(char *str)
{
	int a, alter = 1;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (alter > 0)
		{
			_putchar(str[a]);
			alter = -1;
		}
		else
		{
			alter = 1;
		}
	}
	_putchar('\n');
}
