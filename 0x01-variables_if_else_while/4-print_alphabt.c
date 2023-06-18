#include <stdio.h>

/**
 *main - alpha bet exludint e and q will be printed here
 *
 *Return:0 shows successful run
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
