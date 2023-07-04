#include "main.h"
/**
 *_strstr - to find a substring amongst a string
 *@haystack: the string to where a substring is to be found
 *@needle: the substring point
 *
 *Return: the pointer of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != 0)
	{
		char *strStart = haystack;
		char *substrStart = needle;

		while (*haystack != '\0' && *needle != '\0' &&
				*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
		{
			return ((char *)strStart);
		}

		haystack = strStart + 1;
		needle = substrStart;
	}

	return ('\0');
}
