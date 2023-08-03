#include "main.h"

int check_pal(char *s, int j, int h);
int _strien_recursion(char *s);

/**
 * is_palindrome - a function that returns 1 if a string is a
 * palindrome and 0 if not.
 * @s: string to be reversed
 * weitten by jude
 * Return: 1 if it is, 0 it its not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strien_recursion(s)));
}

/**
 * _strien_recursion - returns the length of a string.
 * @s: string to be calculated
 *
 * Return: lenght of the string
 */
int _strien_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strien_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to be checked
 * @j: iterator
 * @h: length of the string
 * *
 * Return: 1 if palindrome, 0 if not.
 */
int check_pal(char *s, int j, int h)
{
	if (*(s + j) != *(s + h - 1))
		return (0);
	if (j >= h)
		return (1);
	return (check_pal(s, j + 1, h - 1));
}
