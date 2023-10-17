#include "main.h"
/**
 * _abs - starts the program
 * @n: recive the int value use for the function
 * Description - computes the absolute value of an integer
 * Return: the result of all the computes
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
