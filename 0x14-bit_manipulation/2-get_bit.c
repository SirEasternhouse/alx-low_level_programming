#include "main.h"
/**
 *get_bit - return value of a bit given an index
 *@n: number
 *@index: index to return
 *
 *Return: the index requested
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;

	return ((n & mask) ? 1 : 0);
}
