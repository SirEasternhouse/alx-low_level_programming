#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
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
 *array_iterator - function executed for each element of an array
 *@array: array from which element is to be printed
 *@size: size of array
 *@action: pointer to the function to use
 *
 * Return: none
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
/**
 *print_element - element to  print
 *@element: element to print
 *
 *Return: none
 */
void print_element(int element)
{
	_putchar('0' + element);
	_putchar(' ');
}
/**
 *square_element - square a number element
 *@element: number to square
 *
 *Return: none
 */
void square_element(int element)
{
	_putchar('0' + element * element);
	_putchar(' ');
}
