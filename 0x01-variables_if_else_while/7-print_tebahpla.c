#include <stdio.h>

/**
 *main - printing the alphabet in small letters
 *Return:value of 0 indicates succeful execution
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a';)
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
