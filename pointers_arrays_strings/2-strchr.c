#include "main.h"
#include <stddef.h>
/**
* *_strchr - it starts the program
* @s: recive a value
* @c: recive value
* Description - checks if theres is a value in a memory block
* Return: char pointer to the occurence of c in s or NULL if theres none
*/
char *_strchr(char *s, char c)
{
	char *ptr;
	int a;

	ptr = NULL;
	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
		{
			ptr = &s[a];
			return (ptr);
		}
	}
	return (ptr);
}
