#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_range - create an array of integers
 *@min:low end of the array
 *@max:high end of the array
 *
 *Return: array of integers
 *
 */
int *array_range(int min, int max)
{
	unsigned int size = max - min + 1;
	int *array = malloc(size * sizeof(int));
	unsigned int i = 0;

	if (min > max)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
