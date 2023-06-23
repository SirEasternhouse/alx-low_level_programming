#include <unistd.h>
#include "main.h"

/**
 *_isupper - checks for uppercase
 *
 * Return: 1 indicate success
 */

int _isupper(int c)
{
	/* create a list of uppercase letters */

	int upper_case[26];
	int i;

	for (i = 0; i < 26; i++)
	{
		upper_case[i] = 'A' + i;
	}
	/* matching the character to the list created */

	for (i = 0; i < 26; i++)
	{
		if (c == upper_case[i])
		{
			return (1);
		}
	}
	return (0);
}
