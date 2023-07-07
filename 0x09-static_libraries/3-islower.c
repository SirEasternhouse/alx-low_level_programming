#include <unistd.h>
#include "main.h"

/**
 *_islower - checks if character is lower case
 *@c: The character to print
 *
 * Return: success =1
 */

int _islower(int c)
{
	/*creating lower case alphabet list*/
	int lower_case[26];
	int i;

	for (i = 0; i < 26; i++)
	{
		lower_case[i] = 'a' + i;
	}

	/*match a character in a array to confrim it is alowercase */
	for (i = 0; i < 26; i++)
	{
		if (c == lower_case[i])
		{
			return (1);
		}
	}
	return (0);
}
