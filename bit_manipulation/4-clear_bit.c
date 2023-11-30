#include "main.h"
/**
* clear_bit - changes the value of a bit on index
* @n: recive a value
* @index: recived value
*
* Return: 1 if it finish, -1 on error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	temp = ~(1UL << index);
	*n = *n & temp;
	return (1);
}
