#include <stdio.h>

/**
 *main - printing the alphabet in small letters
 *Return:value of 0 indicates succeful execution
 */
int main()
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z';)
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
