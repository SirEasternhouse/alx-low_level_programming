#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - print the diagonal sums of an array
 *@a: the array to search
 *@size: the size of the array
 *
 *Return: none
 *
 */
void print_diagsums(int *a, int size)
{
	int mainDiagonalSum = 0;
	int antiDiagonalSum = 0;
	int i = 0;

	while (i < size)
	{
		mainDiagonalSum += a[i * size + i];
		antiDiagonalSum += a[i * size + (size - 1 - i)];
		i++;
	}

	printf("%d, %d\n", mainDiagonalSum, antiDiagonalSum);
}
