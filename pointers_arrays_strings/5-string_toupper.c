#include "main.h"
/**
* *string_toupper - it starts the program
* @a: recive a value
* Description - changes the recive string to uppercase
* Return: return the recive string in uppercase
*/
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = (a[i] - 32);
		}
	}
	return (a);
}
