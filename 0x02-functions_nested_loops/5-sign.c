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
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
	}
	return (0);

}
