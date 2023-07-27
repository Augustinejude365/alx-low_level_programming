#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: array
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int q;
	int r;

	for (q = 0; q < n--; q++)
	{
		r = a[q];
		a[q] = a[n];
		a[n] = r;
	}
}
