#include "main.h"
/**
 *_strspn - get a length of a prestring
 *@s: string to evaluate
 *@accept: the prefix to evaluate against
 *
 *Return: count of bytes  from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *currentAccept = accept;
		unsigned int acceptBytes = 0;

		while (*currentAccept != '\0')
		{
			if (*s == *currentAccept)
			{
				acceptBytes = 1;
				break;
			}
			currentAccept++;
		}

		if (acceptBytes == 0)
		{
			break;
		}
		s++;
		count += acceptBytes;
	}
	return (count);
}
