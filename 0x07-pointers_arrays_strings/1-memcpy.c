#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: memory where it will be stored
 * @src: memory area to be copied.
 * @n: number of bytes.
 * *
 * Return: copied memory with n bytes changed.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int l = 0;
	int m = n;

	for (; l < m; l++)
	{
	dest[l] = src[l];
	n--;
	}
	return (dest);
}
