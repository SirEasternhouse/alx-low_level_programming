#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *alloc_grid - create a 2d array
 *@width: width of the array
 *@height: height of the array
 *
 *Return: 2D array initialized with 0
 */
int **alloc_grid(int width, int height)
{
	int **grid = malloc(height * sizeof(int *));

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	if (grid != NULL)
	{
		int i = 0;

		while (i < height)
		{
			grid[i] = malloc(width * sizeof(int));

			if (grid[i] != NULL)
			{
				int j = 0;

				while (j < width)
				{
					grid[i][j] = 0;
					j++;
				}
			}
			else
			{
				int k = 0;

				while (k < i)
				{
					free(grid[k]);
					k++;
				}
				free(grid);
				return (NULL);
			}
			i++;
		}
	}
	return (grid);
}
