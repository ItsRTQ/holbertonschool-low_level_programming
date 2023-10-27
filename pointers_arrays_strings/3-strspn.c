#include "main.h"
/**
* _strspn - it starts the program
* @s: recive a value
* @accept: recive value
* Description - gets the lenght of a prefix substring
* Return: unsigned int with the initial segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, amount = 0, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				amount++;
				break;
			}
		}
		if (amount == 0)
		{
			return (amount);
		}
	}
	return (amount);
}
