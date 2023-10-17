#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints the abc's
 * Description - prints the alphabet using _putchar
 * Return: is void it doesn't return
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
