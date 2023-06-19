#include <stdio.h>

/**
 * main - numbers from 0-9 will be printed
 *
 * Return: 0 indicated sucessful execution
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
