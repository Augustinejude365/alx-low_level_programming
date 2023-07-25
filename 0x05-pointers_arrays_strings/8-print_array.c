#include <stdio.h>
/**
 * print_array - Function that prints n elements of an array of
 * integer, followed by a new line.
 * @a: This is the input array
 * @n: This is the lenght of the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
