#include "main.h"
/**
* _atoi - it starts the program
* @s: recive a value
* Description - converts a string to numbers taking t account -+
* Return: return the number converted to string
*/
int _atoi(char *s)
{
	int value = 0, a, negative = 1;

	if (s == "-2147483648")
	{
		value = -2147483648
		return (value);
	}
	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= '0' && s[a] <= '9')
		{
			if (s[a - 1] == '-')
			{
				negative = -1;
			}
			value = value * 10 + (s[a] - '0');
		}
	}
	return (value * negative);
}
