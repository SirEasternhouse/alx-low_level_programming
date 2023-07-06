#include "main.h"
/**
 *isDivisible - checking the divisibilty requirement of a prime number
 *
 *@n: number to test as a prime number
 *@divisor: a dividing number to test the divisibily of a number to be a prime
 *
 *Return: the divisibility of a number
 */
int isDivisible(int n, int divisor)
{
	if (divisor == 1)
	{
		return (0);
	}
	if (n % divisor == 0)
	{
		return (1);
	}
	return (isDivisible(n, divisor - 1));
}

/**
 *is_prime_number - returning the prime number test value
 *
 *@n: number to test as a prime number
 *
 *Return: 1 indicates number is a prime number
 *
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (!isDivisible(n, n - 1));
}
