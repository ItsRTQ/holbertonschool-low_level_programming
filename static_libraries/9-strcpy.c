#include "main.h"
#include "2-strlen.c"
/**
* *_strcpy - it starts the program
* @dest: recive a value
* @src: second value
* Description - mimics the function builtin function that lets you copy strings
* Return: a copy of the src string inside dest
*/
char *_strcpy(char *dest, char *src)
{
	int a, SizeofSrc = (_strlen(src)) + 1;

	for (a = 0; a < SizeofSrc; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
