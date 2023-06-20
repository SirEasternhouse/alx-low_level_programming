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
 * main - prints _putchar 
 *
 * Return: On success 0.
 */
int main(void)
{
	char c = '_';
	char d = 'p';
	char e = 'u';
	char f = 't';
	char h = 'c';
	char i = 'h';
	char j = 'a';
	char k = 'r';

	_putchar(c);
	_putchar(d);
	_putchar(e);
	_putchar(f);
	_putchar(h);
	_putchar(i);
	_putchar(j);
	_putchar(k);
	_putchar('\n');
	return (0);
}
