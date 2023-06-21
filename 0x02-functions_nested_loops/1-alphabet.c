#include <unistd.h>
#include "main.h"

/**
 * main - printinh of alphabet
 *
 * Return: success =0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
        {
                _putchar(c);
        }
	_putchar('\n');
	return (0);
}
