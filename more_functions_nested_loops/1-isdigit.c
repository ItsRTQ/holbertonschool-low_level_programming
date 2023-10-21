#include "main.h"
/**
 * _isdigit - checks if theres a digit
 * @c: recive the number to check
 * Description - checks if c is a number between 0-9
 * Return: 1 if it is or 0 if is not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
