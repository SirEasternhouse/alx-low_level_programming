#include "main.h"
/**
 *_strlen -  determine the string lenght
 *@s: string to determine length
 *
 *
 *Return: string lenth
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(s + 1));
	}
/**
 *_compare_chars - compare the characters in a string
 *@s: string to compare
 *@start: start of string
 *@end: end of the string
 *
 *Return: the compared string
 */
int _compare_chars(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (_compare_chars(s, start + 1, end - 1));
}
/**
 *is_palindrome - determine if a word or number is a palindrome
 *@s: string to check
 *
 *Return: 1 success
 *
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);

	return (_compare_chars(s, 0, length - 1));
}
