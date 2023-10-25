#include "main.h"
/**
* *leet - it starts the program
* @a: recive a value
* Description - encodes a recive string, with a series of numbers
* Return: the encoded string
*/
char *leet(char *a)
{
	char scanner[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char encoder[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, b;

	for (i = 0 ; a[i] != '\0'; i++)
	{
		if (a[i] != '\n')
		{
			for (b = 0; scanner[b] != '\0'; b++)
			{
				if (scanner[b] == a[i])
				{
					a[i] = encoder[b];
				}
			}
		}
	}
	return (a);
}
