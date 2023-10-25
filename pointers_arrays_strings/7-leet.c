#include "main.h"
/**
* *leet - it starts the program
* @a: recive a value
* Description - encodes a recive string, with a series of numbers
* Return: the encoded string
*/
char *leet(char *a)
{
	char scanner[] = "aAeEoOtTlL";
	char encoder[] = "4433007711";
	int i, b;

	for (i = 0 ; a[i] != '\0'; i++)
	{
		for (b = 0; scanner[b] != '\0'; b++)
		{
			if (scanner[b] == a[i] && a[i] != '\n')
			{
				a[i] = encoder[b];
				break;
			}
		}
	}
	return (a);
}
