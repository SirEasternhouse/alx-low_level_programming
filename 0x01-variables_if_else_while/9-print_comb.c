#include <stdio.h>

/**
 * main - print numbers using putchar w/ space and ,
 *
 * Return: 0 is succeful execution
 */

int main(void)
{
	int i;

	for (i = 0 ; i <= 9;)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
