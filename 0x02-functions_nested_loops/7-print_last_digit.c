#include <unistd.h>
#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *@i: The number to print the last digits of
 *
 * Return: the last didigts of a number
 */

int print_last_digit(int i)
{
	if (i <= 0)
	{
		i = -i ;
	}

	i = i % 10;
	return (i);

}
