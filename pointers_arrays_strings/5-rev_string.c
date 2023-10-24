#include "main.h"
#include "2-strlen.c"
/**
* rev_string - it starts the program
* @s: recive a value
* Description - reverse a string variable
* Return: void, doesnt return
*/
void rev_string(char *s)
{
	int Size = _strlen(s);
	int a, b;
	char copy[Size + 1];

	for (a = 0; s[a] != '\0'; a++)
	{
		copy[a] = s[a];
	}
	copy[a] = '\0';
	for (a--, b = 0; a >= 0; a--, b++)
	{
		s[a] = copy[b];
	}
}
