#include "main.h"
/**
 *
 *
 *
 *
 *
 */
char *_memcpy(char *dest, char *src, unsigned int  n)
{
	unsigned int i;

	while(src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
