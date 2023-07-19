#include <unistd.h>
#include "function_pointers.h"
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
 *print_name - print the name of an individual
 *@f: pointer to function
 *@name: name to print
 *
 * Return: none
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
/**
 *print_custom - print chars to the std output
 *@name: the characters to print
 *
 *Return: none
 */
void print_custom(char *name)
{
	while (*name != '\0')
	{
		_putchar(*name);
		name++;
	}
	_putchar('\n');
}
