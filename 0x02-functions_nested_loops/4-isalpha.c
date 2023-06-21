#include <unistd.h>
#include "main.h"

/**
 *_isalpha - checks if character is an alphbet
 *@c: The character to print
 *
 * Return: success =1
 */

int _isalpha(int c)
{
	int i, j;
	int lower_case[26];
	int upper_case[26];

	for (i = 0; i < 26; i++)
	{
		lower_case[i] = 'a' + i
	}
	for (j = 0; j < 26; j++)
	{
		upper_case[j] = 'A' + j;
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
	for (j = 0; j < 26; j++)
	{
		if (c == upper_case[j])
		{
			return (1);
		}
	}
	return (0);
}
