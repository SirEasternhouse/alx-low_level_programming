#include "main.h"
/**
 * _strcmp - compare two string
 *@s1: the value at an address to compare
 *@s2: the value at an address to compare to s1
 *
 *Return: an integer value of the difference in acii values between s1 &s2
 *
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
