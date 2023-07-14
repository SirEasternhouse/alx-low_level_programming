#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
/**
 *_calloc - allocate memory to an array
 *@nmemb:array size
 *@size:number of bytes
 *
 *Return: pointer to an array
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	if (ptr != NULL)
	{
		_memset(ptr, 0, nmemb * size);
	}
	return (ptr);
}
