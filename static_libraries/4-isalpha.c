#include "main.h"
/**
 * _isalpha - is the main function of this program
 * @c: recive a letter the checks it
 * Description - checks if c is lowercase or uppercase
 * Return: 1 if it is lowercase or uppercase 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
