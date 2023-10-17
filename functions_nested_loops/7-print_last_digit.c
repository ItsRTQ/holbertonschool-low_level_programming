#include "main.h"
/**
 * print_last_digit - starts the program
 * @n: recive parameter save it into n
 * Description - prints the last digit of a number
 * Return: the last digit of the recive number
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = (n * -1);
	}
	int last;

	last = (n % 10);
	_putchar('0' + last);
	return (last);
}
