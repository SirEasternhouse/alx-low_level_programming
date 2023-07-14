#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid - free memory from a 2d array
 *@grid: array to free
 *@height:height of the array
 *
 * Return: free grid
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
	{
		return;
	}

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
