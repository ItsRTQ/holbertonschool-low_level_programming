#include "main.h"
/**
 * _islower - checks if the letter is lower or upper case
 * @c: the character to check
 * Description - the function recive a parameter then checks it
 * Return: 1 or 0 depending on the input for the function
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
