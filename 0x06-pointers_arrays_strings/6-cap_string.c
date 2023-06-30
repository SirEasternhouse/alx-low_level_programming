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
	int i = 0;
	int capital_next = 1;

	while (str[i] != '\0')
	{
		if (capital_next && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= ('a' - 'A');
		}

		capital_next = 0;

		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' ||
				str[i] == '}')
		{
			capital_next = 1;
		}
		else
		{
			capital_next = 0;
		}
		i++;
	}
	return (str);
}
