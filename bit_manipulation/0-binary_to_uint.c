#include "main.h"
/**
* binary_to_uint - turns a binary to unsigned int
* @b: value to transform
*
* Return: the value of b turn to base 2
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int itsme = 0, bits = 1;
	int walker = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (; b[walker] != '\0'; walker++)
	{
		if (b[walker] < '0' || b[walker] > '1')
			return (0);
	}
	walker--;
	for (; walker >= 0; walker--)
	{
		if (b[walker] == '1')
		{
			itsme = itsme + bits;
		}
		bits = bits * 2;
	}
	return (itsme);
}
