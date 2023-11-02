#include "main.h"
/**
* _print_rev_recursion - it starts the program
* @s: recive a value
* Description - Write a function that prints a string in reverse.
* Return: void, doesnt return
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		s++;
		_print_rev_recursion(s);
	}
	s--;
	_putchar(*s);
}
