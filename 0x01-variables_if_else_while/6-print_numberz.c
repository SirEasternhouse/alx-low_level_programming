#include <stdio.h>

/**
 * main - print numbers using putchar
 *
 * Return: 0 is succeful execution
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
