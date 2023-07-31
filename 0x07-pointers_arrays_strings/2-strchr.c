#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: input
 * @c: input
 * Return: 0 (uppon success)
 */
char *_strchr(char *s, char c)
{
	int g = 0;

	for (; s[g] >= '\0'; g++)
	{
	if (s[g] == c)
	return (&s[g]);
	}
	return (0);
}
