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
	char ch;
	const char *ptr = format;
	va_list args;
	va_start(args, format);

	while ((ch = *ptr++) != '\0')
	{
		switch (ch)
		{
			case 'c':
				_putchar(va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':printf("%f", va_arg(args, double));
				 break;
			case 's':
				 {
					 char *str_arg = va_arg(args, char *);

					 if (str_arg == NULL)
					 {
						 printf("(nil)");
					 }
					 else
					 {
						 printf("%s", str_arg);}
				 }
				 break;
			default:
				 continue;
		}
		if (*ptr == ',' && *(ptr + 1) == ' ')
		{
			printf(", ");ptr += 2;
		}
	}
	va_end(args);
	printf("\n");
}

