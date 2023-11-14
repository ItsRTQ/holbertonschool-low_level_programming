#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
* array_iterator - it starts the program
* @array: array of values recives
* @size: size of the array
* @action: recive function, throught func pointers
* Description - performs the given function to all array values
* Return: void, doesnt return
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
