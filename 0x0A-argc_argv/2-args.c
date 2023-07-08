#include <stdlib.h>
#include <stdio.h>
/**
 *main - show the number of aruments
 *@argc: number of arguments
 *@argv: string to print
 *
 *Return: success 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

