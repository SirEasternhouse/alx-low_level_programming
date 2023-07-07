#include "main.h"

/**
 * _strlen - determine the lenght of a string
 * @s: string length to be determined
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
