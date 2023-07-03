#include "main.h"
/**
 *_memcpy -  copy memory allocated in _memset
 *@dest: the destination to copy to
 *@src: the source from which the memory will be copied from
 *
 *Return: the copied string
 */
char *_memcpy(char *dest, char *src, unsigned int  n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
