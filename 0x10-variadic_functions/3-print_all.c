#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_all - print anything
 *@format: the format in which characters are to be printed
 *
 *
 *Return: none
 */
void print_all(const char * const format, ...)
{
	int need_separator = 0;
	char ch;
	const char *ptr = format;
	va_list args;

	va_start(args, format);

	while ((ch = *ptr) != '\0')
	{
		if (need_separator)
		{
			printf(", ");
			need_separator = 0;
		}
		switch (ch)
		{
			case 'c':
				putchar(va_arg(args, int));
				break;

			case 'i':
				printf("%d", va_arg(args, int));
				break;

			case 'f':
				printf("%f", va_arg(args, double));
				break;

			case 's':
				{
					char *str_arg = va_arg(args, char *);

					if (str_arg == NULL || printf("%s", str_arg) < 0)
					{
						printf("(nil)");
					}
				}
				break;
			default:
				ptr++;
				continue;
		}
		ptr++;
		need_separator = 1;
	}
	va_end(args);
	printf("\n");
}
