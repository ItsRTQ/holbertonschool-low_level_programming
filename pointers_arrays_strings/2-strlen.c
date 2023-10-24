#include "main.h"
/**
* _strlen - it starts the program
* @s: recive a value
* Description - checks how long the strings is and returns
* Return: the length of the string
*/
int _strlen(char *s)
{
	int a, leng, b;

	for (a = 0; a != -1; a++)
	{
		b = *(s + a);
		if (b == '\0')
		{
			leng = a;
			a = -1;
		}
	}
	return (leng);
}
