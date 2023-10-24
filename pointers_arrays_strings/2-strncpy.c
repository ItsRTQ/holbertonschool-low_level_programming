#include "main.h"
#include "2-strlen.c"
/**
* *_strncpy - it starts the program
* @dest: recive a value
* @src: second value
* @n: third value
* Description - this function is going to work exactly like the copystring function
* Return: return a pointer dest after it is change
*/
char *_strncpy(char *dest, char *src, int n)
{
	//int Size = _strlen(src);
	int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
