#include "main.h"
/**
 *reverse_array - reverse an array for any amount of integers
 *@a: aray to reverse
 *@n: number of values in a  array
 *
 *Return: none
 */
void reverse_array(int *a, int n)
{
	int *end = a + n - 1;
	int *start = a;

	while (start < end)
	{
		int temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
