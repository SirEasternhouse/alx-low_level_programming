#include "main.h"

/**
 * puts2 -prints every 2nd digit
 * @str: string to print every 2nd char
 *
 * Return: none
 */

void puts2(char *str)
{
	int counter = 0;

	while (*str != '\0')
	{
		if (counter % 2 == 0)
		{
			_putchar(*str);
		}
		counter++;
		str++;
	}
	_putchar('\n');
}
