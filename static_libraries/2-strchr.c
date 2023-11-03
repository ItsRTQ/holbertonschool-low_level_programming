#include "main.h"
#include "2-strlen.c"
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
	int a, Size = _strlen(s);

	ptr = NULL;
	if (c == '\0')
	{
		ptr = &s[Size];
		return (ptr);
	}
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
