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
	if (n == -2147483647 - 1)
	{
		n = 8;
	}
	n = (n % 10);
	_putchar('0' + n);
	return (n);
}
