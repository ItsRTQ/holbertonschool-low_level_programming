#include "main.h"
/**
* _pow_recursion - it starts the program
* @x: recive a value
* @y: recive parameter
* Description - function that returns the value of x raised to the power of y
* Return: if y is less than 0 return -1 otherwise return total
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (_pow_recursion(x, y - 1) * x);
}
