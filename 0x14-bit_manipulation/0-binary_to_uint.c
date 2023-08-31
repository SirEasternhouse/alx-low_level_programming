#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
 *binary_to_uint - make binary to integer
 * @b: binary number to convert
 *
 * Description: convert binary to number
 * Return: coverted binary to unsigned int string
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int digit;

	if (b == NULL)
	{
		return (0);
	}
	
	result = 0;

	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		digit = *b - '0';

		result = (result << 1) | digit;b++;
	}
	return (result);
}
