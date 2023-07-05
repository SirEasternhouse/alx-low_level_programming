#include "main.h"
/**
 *_print_rev_recursion - print a char recursively
 *@s: the character(s) to print
 *
 *Return: none
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
