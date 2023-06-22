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
	while (n > 0)
	{
		_putchar('+');
	}
	while (n < 0)
	{
		_putchar('-');
	}
	while(n == 0)
	{
		_putchar('0');
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
