#include "main.h"
#include <limits.h>

/**
 * _atoi - converting a string to int
 *@s: string to convert
 *
 * Description: the suntion will convert a string into an integer
 *Return: always 0 otherwise sign * result
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int numbers_found = 0;

	while (*s == ' ')
	{
		s++;
	}
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
		{
			sign = -1;
		}
		s++;
	}
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			int digit = *s - '0';

			if (result > (INT_MAX - digit) / 10)
			{
				if (sign == 1)
				{
					return (INT_MAX);
				}
				else
				{
					return (INT_MIN);
				}
			}
			result = result * 10 + digit;
			numbers_found = 1;
		}
		else if (numbers_found)
		{
			break;
		}
		s++;
	}
	if (!numbers_found)
	{
		return (0);
	}
	return (sign * result);
}
