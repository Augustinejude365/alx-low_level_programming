#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 * JA codes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l;

	l = 0;

	while (l < n && src[l] != '\0')
	{
		dest[l] = src[l];
		l++;
	}
	return (dest);
}
