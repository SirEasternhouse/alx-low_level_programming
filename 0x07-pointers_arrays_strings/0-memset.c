#include "main.h"
/**
 *_memset - filling memory with a constant byte
 *@s:the pointer to be used to allocate the constant character
 *@b: the constant character to print
 *@n: amount of bytes to allocate
 *
 *Return: the allocated bytes in an array
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
