#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *sum_them_all - sum all arguments of n
 *@n: number of integer arguments to accept
 *
 *Return: sum of n integers
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_list ap;
		unsigned int i, sum;

		va_start(ap, n);
		sum = 0;

		for (i = 0; i < n; i++)
		{
			sum += va_arg(ap, unsigned int);
		}

		va_end(ap);
		return (sum);
	}
}
