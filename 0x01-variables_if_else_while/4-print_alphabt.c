#include <stdio.h>

/**
 * main - print alphabet excluding char
 * Result:0 show succesful execution
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
