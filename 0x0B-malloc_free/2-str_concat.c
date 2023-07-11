#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
 *str_concat - concatenate 2 strings
 *@s1:string to concatenate
 *@s2:string to concatenate
 *
 *Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	size_t totlength = _strlen(s1) + _strlen(s2);
	char *result = malloc((totlength + 1) * sizeof(char));

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	if (result != NULL)
	{
		_strcpy(result, s1);

		_strcat(result, s2);
	}
	return (result);
}
