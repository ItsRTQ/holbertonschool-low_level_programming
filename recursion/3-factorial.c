#include "main.h"
/**
* factorial - it starts the program
* @n: recive a value
* Description - returns the factorial of the given number
* Return: the factorial, of -1 if error occure
*/
int factorial(int n)
{
	if (n <= 1 && n >= 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
