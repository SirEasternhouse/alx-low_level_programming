#include <stdio.h>
#include "function_pointers.h"
/**
 *int_index - indexing an array
 *@array: array to index
 *@size: size of the array
 *@cmp: fuction pointer to index array
 *
 *Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}

	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}

	return (-1);
}
/**
 *is_even - check for element being even
 *@num: element number to check
 *
 *Return: 1 true
 */
int is_even(int num)
{
	return (num % 2 == 0 ? 1 : 0);
}
