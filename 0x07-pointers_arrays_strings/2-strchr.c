#include "main.h"
#include <stddef.h>
/**
 *_strchr - find 1st instance of character
 *@s: string to look for 1st instance character
 *@c: character to look for
 *
 *Return: pointer at 1st instance of char or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return NULL;
}
