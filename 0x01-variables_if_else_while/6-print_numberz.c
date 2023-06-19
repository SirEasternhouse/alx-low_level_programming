#include <stdio.h>

/**
 * main - print numbers using putchar
 *
 * Return: 0 is succeful execution
 */

int main(void)
{
	char c = 0;

	while (c < 10)
	{
		putchar(c + '0');
		c++;
	}
	putchar('\n');
	return (0);
}
