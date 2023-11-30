#include "main.h"
/**
* print_binary - prints recive value in binary
* @n: recive a value
*
* Return: void, doesnt return
*/
void print_binary(unsigned long int n)
{
	int bits;

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	bits = (n & 1);
	putchar(bits + '0');
}
