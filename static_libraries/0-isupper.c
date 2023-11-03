#include "main.h"
/**
 * _isupper - checks for uppercase letters
 * @c: recive an int value and save it in c var
 * Description - checks if the value in c var is an uppercase
 * Return: it returns 1 if its uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
