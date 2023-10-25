#include "main.h"
/**
* *cap_string - it starts the program
* @a: recive a value
* Description - capitalizes all words in the recive parameter
* Return: the modify parameter
*/
char *cap_string(char *a)
{
	char check[] = {' ', '\t', '\n', ',', ';', '.', '!', '"', '(', ')', '{', '}'};
	int i, b;

	if (a[0] >= 'a' && a[0] <= 'z')
	{
		a[0] = (a[0] - 32);
	}
	for (i = 0; a[i] != '\0'; i++)
	{
		for (b = 0; check[b] != '\0'; b++)
		{
			if (check[b] == a[i])
			{
				if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
				{
					a[i + 1] = (a[i + 1] - 32);
				}
			}
		}
	}
	return (a);
}
