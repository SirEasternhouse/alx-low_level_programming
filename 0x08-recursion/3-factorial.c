#include "main.h"
/**
 *factorial - return the factorial fo any given number
 *@n: the factorial to print
 *
 *Return: the factorial result
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
