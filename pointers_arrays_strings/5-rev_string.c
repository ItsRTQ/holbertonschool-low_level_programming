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
	int lenght = _strlen(s);
	int a,b;
	char temp;

	for (a = 0, b = lenght -1; a < b; a++, b--)
	{
		temp = s[a];
		s[a] = s[b];
		s[b] = temp;
	}
}
