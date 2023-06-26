#include "main.h"

/**
 * _puts - prints a string to the stdout
 *
 * Return: always str
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
