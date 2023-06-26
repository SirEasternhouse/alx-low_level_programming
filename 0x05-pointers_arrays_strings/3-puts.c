#include "main.h"

/**
 * _puts - prints a string to the stdout
 * @str: string character to print
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
