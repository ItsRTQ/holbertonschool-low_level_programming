#include "main.h"
#include "2-strlen.c"
/**
* *_strcat - it starts the program
* @dest: recive a value
* @src: second value
* Description - concatenates two strings together
* Return: return the concatenation of dest and src
*/
char *_strcat(char *dest, char *src)
{
	int Size = _strlen(dest), a;

	Size++;
	for (a = 0; src[a] != '\0'; a++)
	{
		dest[Size + a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
