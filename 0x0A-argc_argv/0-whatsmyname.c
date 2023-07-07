#include <stdlib.h>
#include <stdio.h>
/**
 *main - print the file name
 *@argc: arguments to take
 *@argv: string to print
 *
 *
 *Return: always 0
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
