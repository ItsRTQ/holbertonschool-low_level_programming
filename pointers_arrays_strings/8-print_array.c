#include "main.h"
#include <stdio.h>
/**
* print_array - it starts the program
* @a: recive a value
* @n: recive value
* Description - prints n amount of value of the given array
* Return: void, doesnt return
*/
void print_array(int *a, int n)
{
	int num;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	for (num = 0; num < n; num++)
	{
		printf("%d", a[num]);
		if (num < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
