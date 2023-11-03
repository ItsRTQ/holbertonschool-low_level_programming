#include "main.h"
/**
* _sqrt_recursion - it starts the program
* @n: recive a value
* Description - function that returns the natural square root of a number.
* Return: if n does not have a natural square root, return -1
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (grab_sqrt(n, 1));
}
/**
* grab_sqrt - it starts the program
* @n: value to check for sqrt
* @i: amount to multipie
* Description - checks for the possible sqrt
* Return: returns the square root of -1 if doesnt have natural sqrt
*/
int grab_sqrt(int n, int i)
{
	if ((i * i) > n)
	{
		return (-1);
	}
	else if ((i * i) == n)
	{
		return (i);
	}
	else
	{
		i++;
		return (grab_sqrt(n, i));
	}
}
