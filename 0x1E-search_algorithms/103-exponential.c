#include "search_algos.h"

/**
 * exponential_search - A function that searches for a value in an array with
 * the exponential search algorithm
 * @array: array to search the value in
 * @size: size of the array
 * @value: value to look for in the array
 * Return: the index of the found value, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t start, end, k;

	if (!array || size == 0)
		return (-1);

	end = 1;
	start = 1;
	while (end < size)
	{
		if (value < array[end])
			break;
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);
		start = end;
		end = end * 2;
	}
	k = end < size - 1 ? end : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", start, k);
	return (binary_helper(array, value, end / 2, k));
}

/**
 * binary_helper - A function that searches for a value in an array of
 * integers using recursion
 * @array: array to search the value in
 * @value: value to look for in the array
 * @lo: index of the low bound
 * @hi: index of the high bound
 * Return: the index of the found value, or -1 if not found
 */
int binary_helper(int *array, int value, size_t lo, size_t hi)
{
	size_t mid;

	print_array(array, lo, hi);
	if (hi == lo && array[lo] != value)
		return (-1);

	mid = ((hi - lo) / 2) + lo;
	if (array[mid] == value)
		return (mid);
	if (array[mid] > value)
		return (binary_helper(array, value, lo, mid - 1));
	if (array[mid] < value)
		return (binary_helper(array, value, mid + 1, hi));
	return (-1);
}

/**
 * print_array - A function that prints an array of integers.
 * @array: array to be printed
 * @lo: index of the low bound
 * @hi: index of the high bound
 */
void print_array(int *array, size_t lo, size_t hi)
{
	size_t k;

	printf("Searching in array: ");
	for (k = lo; k <= hi; k++)
	{
		printf("%d", array[k]);
		if (k < hi)
			printf(", ");
	}
	printf("\n");
}
