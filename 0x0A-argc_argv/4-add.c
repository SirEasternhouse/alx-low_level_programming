#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - add numbers excluding chars
 *@argc: arguments to take
 *@argv: values to store
 *
 *Return: error, 1 fail, 0 success
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		int j = 0;

		while (arg[j])
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(arg);
	}

	printf("%d\n", sum);
	return (0);
}
