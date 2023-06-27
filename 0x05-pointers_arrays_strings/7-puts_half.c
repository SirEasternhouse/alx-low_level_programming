#include "main.h"

/**
 * puts_half -prints half of string
 * @str: string to print every 2nd char
 *
 * Return: none
 */

void puts_half(char *str)
{
	int counter = 0;
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	while (*str != '\0')
	{
		if (counter  >= length / 2)
		{
			_putchar(*str);
		}
		counter++;
		str++;
	}
	_putchar('\n');
}
