#include "main.h"
/**
* *_memset - it starts the program
* @s: recive a value
* @b: recive value
* @n: recive value
* Description - fills the first n bytes of the memory area pointed to by s
* Return: char pointer with the desier value
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
