#include "main.h"
/**
* _strcmp - it starts the program
* @s1: recive a value
* @s2: recive value
* Description - mimics the effect of a built in function
* Return: 0 if s1 = s2, 0 > if s1 > s2, 0 < if s1 < s2.
*/
int _strcmp(char *s1, char *s2)
{
	int value = 0, a;

	for (a = 0; s1[a] != '\0'; a++)
	{
		if (s1[a] == s2[a])
		{
			continue;
		}
		else if (s1[a] > s2[a])
		{
			value = 1;
			return (value);
		}
		else if (s1[a] < s2[a])
		{
			value = -1;
			return (value);
		}
	}
	return (value);
}
