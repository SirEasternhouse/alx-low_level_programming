#include "main.h"
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
