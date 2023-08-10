#include <stdlib.h>
#include "main.h"

/**
 * _memset - fills memory with a cnstant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy
 * JA codes
 * Return: pointer to the memory area string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int g;

	for (g = 0; g < n; g++)
	{
		s[g] = b;
	}
	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * JA codes
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pontr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pontr = malloc(size * nmemb);

	if (pontr == NULL)
		return (NULL);

	_memset(pontr, 0, nmemb * size);

	return (pontr);
}
