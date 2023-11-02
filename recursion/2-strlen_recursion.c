#include "main.h"
/**
* _strlen_recursion - it starts the program
* @s: recive a value
* Description - function that returns the length of a string.
* Return: the lenght of the string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
