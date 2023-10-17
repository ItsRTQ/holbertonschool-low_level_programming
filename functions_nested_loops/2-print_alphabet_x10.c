#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints de abc's
 * Description - prints the abc's 10 times
 * Return: doesn't return, it return is void
 */
void print_alphabet_x10(void)
{
	int ch;
	int rep;

	for (rep = 0; rep < 10; rep++)
	{
		for (ch = 97; ch <= 122; ch++)
		{
			_putchar(ch);
		}
		putchar('\n');
	}
}
