#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @index: the bit index.
 * @n: pointer to the unsigned integer.
 * Written by Jude Augustine.
 * Return: 1 if it worked, or -1 if unsuccessful.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index > 63)
	{
		return (-1);
	}

	if (*n & mask)
	{
		*n ^= mask;
	}

	return (1);
}
