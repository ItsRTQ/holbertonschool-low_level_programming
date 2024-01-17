#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @start: where to start
 * @end: when to stop printing
 */
void print_array(const int *array, int start, int end)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - search a data structure using binary search method
 * @array: array to search
 * @size: size of the array
 * @value: targeted value to look for
 *
 * Return: index where value was, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = (size - 1), mid;

	if (array != NULL)
	{
		while (start <= end)
		{
			print_array(array, start, end);
			mid = start + (end - start) / 2;

			if (array[mid] == value)
				return (mid);
			if (array[mid] < value)
				start = mid + 1;
			else
				end = mid - 1;
		}


	}
	return (-1);
}
