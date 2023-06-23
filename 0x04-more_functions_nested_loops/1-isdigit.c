#include <unistd.h>
#include "main.h"

/**
 * _isdigit - checks for uppercase
 *@c: The character to print
 *
 * Return: 1 indicate success
 */

int _isdigit(int c)
{
	int digit[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i;

	for (i = 0; i < 10; i++)
	{
		if (c == digit[i] + '0')
		{
			return (1);
		}
	}
	return (0);
}
