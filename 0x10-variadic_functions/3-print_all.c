#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 *print_all - print anything
 *@format: the format in which characters are to be printed
 *
 *
 *Return: none
 */
void print_all(const char * const format, ...)
{
	int separator_flag = 0;

	const char *ptr = format;
	va_list args;

	va_start(args, format);

	while (*ptr != '\0')
	{
		if (*ptr == 'c')
		{
			if (separator_flag)
				printf(", ");
			_putchar(va_arg(args, int));
			separator_flag = 1;
		}
		else if (*ptr == 'i')
		{
			if (separator_flag)
				printf(", ");
			printf("%d", va_arg(args, int));
			separator_flag = 1;
		}
		else if (*ptr == 'f')
		{
			if (separator_flag)
				printf(", ");
			printf("%f", va_arg(args, double));
			separator_flag = 1;
		}
		else if (*ptr == 's')
		{
			char *str_arg = va_arg(args, char *);

			if (str_arg == NULL)
			{
				if (separator_flag)
					printf(", ");
				printf("(nil)");
			}
			else
			{
				if (separator_flag)
					printf(", ");
				printf("%s", str_arg);
			}
			separator_flag = 1;
		}
		else
		{
			/* Ignore any other characters*/
		}
		ptr++;
	}
	va_end(args);
	printf("\n");
}
