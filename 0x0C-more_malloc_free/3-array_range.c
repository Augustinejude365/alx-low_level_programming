#include <stdlib.h>
#include "main.h"

/**
 * *array_range - a function that creates an array of integers.
 * @min: minimum range of value stored
 * @max: maximum range of value stored
 * JA codes
 * Return: pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *pontr;

	int f, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pontr = malloc(sizeof(int) * size);

	if (pontr == NULL)
		return (NULL);

	for (f = 0; min <= max; f++)
		pontr[f] = min++;

	return (pontr);
}
