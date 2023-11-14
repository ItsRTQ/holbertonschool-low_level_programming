#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
* int_index - it starts the program
* @array: recive a values
* @size: size of the array
* @cmp: recive function, throught function pointers
* Description - does a comparasion of the array index value to the fucntion
* Return: returns 0 or -1 based on the cmp return
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int verify;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		verify = cmp(array[i]);
		if (verify != 0)
		{
			return (i);
		}
	}
	return (-1);
}
