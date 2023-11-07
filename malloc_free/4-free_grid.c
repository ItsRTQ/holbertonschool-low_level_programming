#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
* free_grid - creates a 2D array filled with 0s
* @grid: first parameter
* @height: number of rows
* Return: void, doesnt return
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
