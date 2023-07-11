#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strlen - detrmine the lenght of a string
 *@s: string length to be determined
 *
 * Return: length of string
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
/**
 * *_strcpy - copy a string from source to destination
 * @src: the source of the string to be copied
 * @dest: destination to copy the string to
 *
 * Return: the destination
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}

/**
 * *_strdup - return a point to a new string which is a duplicate of str
 *@str: string to be duplicatd and pointed to
 *
 *
 *Return: copied string to a pointer
 *
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		size_t length = _strlen(str);

		char *duplicate = malloc((length + 1) * sizeof(char));

		if (duplicate != NULL)
		{
			_strcpy(duplicate, str);
		}
		return (duplicate);
	}
}

