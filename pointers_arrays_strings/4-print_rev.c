#include "main.h"
/**
* print_rev - it starts the program
* @s: recive a value
* Description - prints a string in reverse
* Return: void, doesnt return
*/
void print_rev(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	for (;a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
