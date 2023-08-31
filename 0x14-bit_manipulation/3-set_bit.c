#include "main.h"
/**
 *set_bit - change the value  of a bit to 1 @ speified index
 *@n: number
 *@index: index to change
 *
 *Return: 1 is success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	
	mask = 1UL << index;

	*n |= mask;

	return (1);
}
