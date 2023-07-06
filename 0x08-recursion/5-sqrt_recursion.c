#include "main.h"
/**
 *_sqrt_helper - function to aid the calculation of the square root
 *@start: begining of a gusss
 *@end: the end value of a guess
 *@n: number to determine as squre root
 *
 *Return: guess of the square rot
 */
int _sqrt_helper(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (start > end)
	{
		return (-1);
	}
	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid > n)
	{
		return (_sqrt_helper(n, start, mid - 1));
	}
	else
	{
		return (_sqrt_helper(n, mid + 1, end));
	}
}

/**
 *_sqrt_recursion - determine the squareroot of an integer
 *
 *@n: number to determine the sqauare root of
 *
 *
 *Return: the square root of the number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_helper(n, 1, n));
	}
}
