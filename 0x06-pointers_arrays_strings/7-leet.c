#include "main.h"
/**
 *leet - encoding  letters with numbers
 *@str: the string to encode
 *
 *
 *Return: the encoded string
 *
 */
char *leet(char *str)
{
	char *ptr = str;
	char leetMap[] = "aAeEoOtTlL";
	char leetEncode[] = "4433007711";
	int i;

	while (*ptr != '\0')
	{
		i = 0;
		while (leetMap[i] != '\0')
		{
			if (*ptr == leetMap[i])
			{
				*ptr = leetEncode[i];
				break;
			}
			i++;
		}
		ptr++;
	}
	return (str);
}

