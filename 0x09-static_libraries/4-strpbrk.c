#include "main.h"
/**
 *_strpbrk - search for a string in any number of bytes
 *@s: the string to search in a number of bytes
 *@accept: values to compare to
 *
 *Return: the value of the string
 */
char *_strpbrk(char *s, char *accept)
{
	char *currentAccept;

	while (*s != '\0')
	{
		if (*s == *accept)
		{
			return (s);
		}

		currentAccept = accept;

		while (*currentAccept != '\0')
		{
			if (*s == *currentAccept)
			{
				return (s);
			}

			currentAccept++;
		}

		s++;
	}
	return ('\0');
}
