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
	char ch;
	const char *ptr = format;
	va_list args;

	va_start(args, format);

	while ((ch = *ptr++) != '\0')
	{
		switch (ch)
		{
			case 'c':
				printf("%c", va_arg(args, int));
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

					 if (str_arg == NULL || 
							 printf("%s", str_arg) < 0)
					 {
						 printf("(nil)");
					 }
				 }
				 break;
			default:
				 continue;
		}
	}

	if (*ptr == ',' && *(ptr + 1) == ' ')
	{
		printf(", ");
		ptr += 2;
	}

	va_end(args);
	printf("\n");
}
