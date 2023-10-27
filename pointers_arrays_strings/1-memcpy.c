#include "main.h"
/**
* *_memcpy - it starts the program
* @dest: recive a value
* @src: recive value
* @n: revive value
* Description - copues n bytes from memory area src to memory area dest
* Return: char pointer to the memory block
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
