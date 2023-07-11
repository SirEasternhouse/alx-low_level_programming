#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - creating an array by using a char
 *@size: size of the array
 *@c: the character to print
 *
 *Return: char c in an array of size
 *
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		char *str = malloc(size * sizeof(char));

		if (str == NULL)
		{
			return (NULL);
		}
		else
		{
			unsigned int i = 0;

			while (i < size)
			{
				str[i] = c;
				i++;
			}
			return (str);
		}
	}
}
