#include "main.h"
/**
* reverse_array - it starts the program
* @a: recive a value
* @n: recive value
* Description - reverse an array of int values
* Return: void, doesnt return
*/
void reverse_array(int *a, int n)
{
	int count;
	int temp;

	for (count = 0; count < n / 2; count++)
	{
		temp = a[count];
		a[count] = a[n - count - 1];
		a[n - count - 1] = temp;
	}
}
