#include "main.h"
/**
* _puts_recursion - it starts the program
* @s: recive a value
* Description - prints a string followed by a new line
* Return: void, doesnt return
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
