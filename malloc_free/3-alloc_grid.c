#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
* alloc_grid - creates a 2D array filled with 0s
* @width: number of columns
* @height: number of rows
* Return: pointer to the 2D array
*/
int **alloc_grid(int width, int height)
{
	int **multArray;
	int i, b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	multArray = (int **)malloc(height * sizeof(int *));
	if (multArray == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		multArray[i] = (int *)malloc(width * sizeof(int));
		if (multArray[i] == NULL)
		{
			for (b = 0; b < i; b++)
			{
				free(multArray[b]);
			}
			free(multArray);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (b = 0; b < width; b++)
		{
			multArray[i][b] = 0;
		}
	}
	return (multArray);
}
