#include "main.h"
/**
* get_bit - gives bit in given index
* @n: recive a value
* @index: recive value
*
* Return: the binary number at index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp;
	int value;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	temp = 1UL << index;
	value = (n & temp) ? 1 : 0;
	return (value);
}
