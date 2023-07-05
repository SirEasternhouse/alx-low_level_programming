#include "main.h"
/**
 *_strlen_recursion - determint the length of a string recursively
 *@s: the string which the lenght is to be determined
 *
 *Return: the string length as a integer
 *
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
