#include "main.h"
#include "2-strlen.c"
/**
* puts_half - it starts the program
* @str: recive a value
* Description - prints half of the string
* Return: void, doesnt return
*/
void puts_half(char *str)
{
	int Size = (_strlen(str) + 1);
	int a;

	if (Size % 2 == 1)
	{
		Size = (Size - 1) / 2;
		for (a = Size; str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
	}
	else
	{
		for (a = (Size / 2); str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
