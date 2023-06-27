#include <stdio.h>
#include "main.h"

/**
 * print_array - print an array for any given value of n
 * @a: the array to print
 * @n: the number of values to include in an array
 *
 * Return : none
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);
}
