#include "main.h"
#include <stdio.h>
/**
* print_diagsums - it starts the program
* @a: recive a value
* @size: recive value
* Description - prints the sum of two diagonals of square matrix
* Return: void, doesnt return
*/
void print_diagsums(int *a, int size)
{
	int i, total = 0, posY, posX, temp;

	for (i = 0; i < size; i++)
	{
		total = total + a[i * size + i];
	}
	printf("%d, ", total);
	total = 0;
	temp = (size - 1) * 10;
	for (i = 0; i < size; i++)
	{
		if (temp < 10)
		{
			posY = 0;
		}
		else
		{
			posY = temp / 10;
		}
		posX = temp % 10;
		total = total + a[posY * size + posX];
		temp = temp - 9;
	}
	printf("%d\n", total);
}
