#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - calculator
 *@argc: number of arguments to accept
 *@argv: values to accept
 *
 *Return: 0 success
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	char *operator = argv[2];
	int num2 = atoi(argv[3]);
	int result;
	int (*selected_op)(int, int) = get_op_func(operator);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	if (*selected_op == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((strcmp(operator, "/") == 0 || strcmp(operator, "%") == 0)
			&& num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = selected_op(num1, num2);
	printf("%d\n", result);

	return (0);

}

