#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - printinh of alphabet
 *
 * Return: success =0
 */
void print_alphabet(void)
{ char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
