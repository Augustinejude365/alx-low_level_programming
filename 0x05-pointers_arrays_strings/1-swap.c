#include "main.h"
/**
 * swap_int - take in two varible integers and swaps them.
 * author Jude Augustine
 * @a: swaps and stores address of b
 * @b: swaps and stores address of a
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}

