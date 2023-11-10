#include "main.h"
#include <stdlib.h>
/**
* array_range - it starts the program
* @min: recive a value
* @max: recive value
* Description - creates an array that contains all the numbers from min to max
* Return: a pointer to newly allocated memory
*/
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min + 1);
	if (min == 0)
	{
		size++;
	}
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = (min + i);
	}
	return (arr);
}
