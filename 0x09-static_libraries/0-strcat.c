#include "main.h"

/**
 * _strcat - concatenate two strings
 *@dest: the destination string
 *@src: the source string to add at the destination
 *
 *
 *Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	char *OriginalDest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (OriginalDest);
}
