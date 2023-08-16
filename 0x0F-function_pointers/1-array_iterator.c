#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - a function that executes a function given as a
 * parameter on each element of an array.
 * @array: Array.
 * @size: Number of elements to be printed.
 * @action: Pointer to print in regular or hex.
 * JA codes
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;
	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}
