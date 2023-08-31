#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @index: the bit index.
 * @n: pointer to the unsigned integer.
 * Written by Jude Augustine.
 * Return: if it worked, or -1 if unsuccessful.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int left_shft;

	if (index > 63)
	{
		return (-1);
	}
	left_shft = 1 << index;
	if (*n & left_shft)
		*n ^= left_shft;
	return (1);
}
