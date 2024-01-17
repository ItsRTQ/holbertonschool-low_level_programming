#include "search_algos.h"

/**
 * linear_search - searchs for a number on a array using linear search
 * @array: array to search
 * @size: size of the array
 * @value: number to search for
 *
 * Return: the found number, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	i = -1;
	return (i);
}
