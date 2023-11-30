#include "main.h"
/**
* flip_bits - returns number of flips to get from one number to another
* @n: recive a value
* @m: recived value
*
* Return: the numer of flips
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int amount = 0;

	while (result)
	{
		amount += result & 1;
		result >>= 1;
	}
	return (amount);
}
