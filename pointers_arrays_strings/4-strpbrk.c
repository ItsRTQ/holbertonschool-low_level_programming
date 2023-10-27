#include "main.h"
#include <stddef.h>
/**
* *_strpbrk - it starts the program
* @s: recive a value
* @accept: recive value
* Description - search a string for any of a set of bytes
* Return: char pointer to the byte s
*/
char *_strpbrk(char *s, char *accept)
{
	char *ptr;
	int a, b;

	ptr = NULL;
	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				ptr = &s[a];
				return (ptr);
			}
		}
	}
	return (ptr);
}
