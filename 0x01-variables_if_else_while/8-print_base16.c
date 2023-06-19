#include <stdio.h>

/**
 * main - print hexnumbers using putchar
 *
 * Return: 0 is succeful execution
 */

int main(void)
{
	char i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	i = 'a';
	while (i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
