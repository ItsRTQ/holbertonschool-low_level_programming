#include "main.h"
#include <stdlib.h>
#include "2-strlen.c"
/**
* *_strncat - it starts the program
* @dest: recive a value
* @src: recive val
* @n: recive val
* Description - mimics the function builting function to concatenate a n value
* Return: pointers to dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int a, Size = _strlen(dest), lock = 0;

	for (a = 0; a != n; a++)
	{
		if (src[a] == '\0')
		{
			lock = 1;
		}
		if (lock  != 1)
		{
			dest[Size + a] = src[a];
		}
	}
	dest[Size + a] = '\0';
	return (dest);
}
