#include "main.h"
/**
* *_strncpy - it starts the program
* @dest: recive a value
* @src: second value
* @n: third value
* Description - Works almost like the copystring function
* Return: return a pointer dest after it is change
*/
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	if (src[0] == '\0')
	{
		for (a = 0; a < n; a++)
		{
			dest[a] = *src;
		}
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			dest[a] = src[a];
		}
	}
	return (dest);
}
