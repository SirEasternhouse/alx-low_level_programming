#include "main.h"
/**
 *_strncpy - copy a string fo n number of bytes
 *@dest: the destingation where the strin will be copied
 *@src: the source of the strng to be copied
 *@n: the number of bytes to be taken
 *
 *Return: the copied string accroding to the number of bytes
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
