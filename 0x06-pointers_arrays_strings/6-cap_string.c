#include "main.h"
/**
 *cap_string - capitalise every 1st letter of a word
 *@str : string to edit
 *
 *Return: the capitalised 1st letter of each word
 *
 */
char *cap_string(char *str)
{
	int capital_next = 1;

	while (*str != '\0')
	{
		if (capital_next && (*str >= 'a' && *str <= 'z'))
		{
			*str -= ('a' - 'A');
		}

		capital_next = 0;

		if (*str == ' ' || *str == '\t' || *str == '\n' ||
				*str == ',' || *str == ';' || *str == '.' ||
				*str == '!' || *str == '?' || *str == '"' ||
				*str == '(' || *str == ')' || *str == '{' ||
				*str == '}')
		{
			capital_next = 1;
		}

		if (*str == '\t')
		{
			*str = ' ';
		}
		str++;
	}
	return (str);
}
