#include "main.h"
/**
 *string_toupper - turn every small case to upper case
 *@str: the string to convert to uppercase
 *
 *Return: upper case letters
 *
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - ('a' - 'A');
		}
		str++;
	}
	return (ptr);
}
