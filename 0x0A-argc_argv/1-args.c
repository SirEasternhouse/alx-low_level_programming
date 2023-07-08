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
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
