#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers - print numbers with at separator
 *@separator: the separator to be used
 *@n: the numbers to e printed
 *
 *Return: none
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i = 0;
	va_list args;

	va_start(args, n);

	while (i < n)
	{
		int num = va_arg(args, int);

		printf("%d", num);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
