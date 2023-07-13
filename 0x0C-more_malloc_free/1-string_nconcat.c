#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
 *_strncat - concatenate a string to a certain amount of bytes from source
 *@dest: the destination where the string will be concatenated
 *@src: the source string to be concatenated
 *@n: the number of bytes to use
 *
 *Return: the concatenated string at dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}

	*dest_ptr = '\0';
	return (dest);
}
/**
 *string_nconcat - concatenate 2 strings
 *@s1: string 1 to concatenate
 *@s2: string 2 to concatenate
 *@n: number of bytes to concatenate
 *
 *Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s2Length = _strlen(s2);
	size_t totalLength = _strlen(s1) + s2Length;
	char *result = malloc((totalLength + 1) * sizeof(char));

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}


	if (s2Length > n)
	{
		s2Length = n;
	}


	if (result != NULL)
	{
		_strcpy(result, s1);

		_strncat(result, s2, s2Length);
	}

	return (result);
}
