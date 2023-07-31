#include "main.h"
/**
 * _memset - fill a block of memory with a specific value.
 * @s: starting adress of memory to be filled.
 * @b: the desired value
 * @n: number of butes to be changed
 * *
 * Return: changed array with new value for n bytes.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int  k = 0;

	for (; n > 0; k++)
	{
	s[k] = b;
	n--;
	}
	return (s);
}
