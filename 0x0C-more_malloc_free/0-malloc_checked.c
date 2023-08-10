#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - a function that allocates memory using malloc
 * @b: number of bytes to allocate
 * JA codes
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pontr;

	pontr = malloc(b);

	if (pontr == NULL)
	exit(98);

	return (pontr);
}
