#include "main.h"
/**
 * print_to_98 - prints numbers
 * @n : recives the desire number to count from
 * Description - prints a count of numbers from n to 98
 * Return: is void, doenst return anything
 */
void print_to_98(int n)
{
	int count;

	if (n < 98)
	{
		for (count = n; count <= 98; count++)
		{
			if (count != 98)
			{
				printer(count);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				printer(count);
				_putchar('\n');
			}
		}
	}
	else if (n > 98)
	{
		for (count = n; count >= 98; count--)
		{
			if (count != 98)
			{
				printer(count);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				printer(count);
				_putchar('\n');
			}
		}
	}
}
/**
 * printer - uses the _putchar to print
 * @number: the number to be printed with _putchar
 * Description - mimics a loop but with a funciton to print higher values
 * Return: is void doesnt return, just prints
 */
void printer(int number)
{
	if (number < 0)
	{
		_putchar('-');
		number = -number;
	}
	if (number >= 10)
	{
		printer(number / 10);
	}
	_putchar((number % 10) + '0');
}
