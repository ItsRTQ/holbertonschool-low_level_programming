#include "main.h"
/**
 * print_sign - starts the program
 * @n: recive value
 * Description - checks if n is greater than zero or lower
 * Return: 1 or 0 or -1 depending on the value of n
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
