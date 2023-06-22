#include <unistd.h>
#include "main.h"

/**
 *print_sign - print +/-
 *@n: The character to print
 *
 * Return: success =1 & -1
 */

int print_sign(int n)
{
	int n;

	if (n > 0)
	{
		_putchar('+');
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	else
	{
		_putchar('0')
	}

	if (n == '+')
	{
		return (1);
	}
	if (n == '-')
	{
		return (-1);
	}
	return (0);

}
