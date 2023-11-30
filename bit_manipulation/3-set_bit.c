#include "main.h"
/**
* set_bit - change a bit to 1 at given index
* @n: recive a value
* @index: recived value
*
* Return: 1 if work -1 on error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	temp = 1UL << index;
	*n = *n | temp;
	return (1);
}
