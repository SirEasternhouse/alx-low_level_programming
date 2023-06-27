#include "main.h"

/**
 * rev_string - print a string in reverse
 * @s: string to print in reverse
 *
 * Return: no return
 */

void rev_string(char *s)
{
	int start;
	int end;
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	start = 0;
	end = length - 1;

	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
