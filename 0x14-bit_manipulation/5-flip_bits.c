#include "main.h"
/**
 *count_set_bits - count the number of set bits
 *@num: number of setbits to count
 *
 *Return: count of set bits
 *
 */
unsigned int count_set_bits(unsigned long int num)
{
	unsigned int count = 0;

	while (num)
	{
		count += num & 1;
		num >>= 1;
	}
	return (count);
}
/**
 * flip_bits - return the number of bots to flip from one number to another
 *@n: number
 *@m: bit to flip to
 *
 *Return: number of fliped bits
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;

	return (count_set_bits(xor_result));
}
