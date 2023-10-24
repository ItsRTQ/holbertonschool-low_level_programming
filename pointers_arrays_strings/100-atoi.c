#include "main.h"
#include <limits.h>
/**
* _atoi - it starts the program
* @s: recive a value
* Description - converts a string to numbers taking t account -+
* Return: return the number converted to string
*/
int _atoi(char *s)
{
	int value = 0, a, negative = 1;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= '0' && s[a] <= '9')
		{
			if (value < INT_MIN)
			{
				return (INT_MIN);
			}
			if (s[a - 1] == '-')
			{
				negative = -1;
			}
			value = value * 10 + (s[a] - '0');
		}
	}
	return (value * negative);
}
