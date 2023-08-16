#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer and return
 * index place of comparison = true, else -1
 * @array: Array.
 * @size: size of the elements in array.
 * @cmp: pointer to the function of one of the three in main.
 * JD codes
 * Return: 0 (Success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (m = 0; m < size; m++)
	{
		if (cmp(array[m]))
			return (m);
	}
	return (-1);
}
