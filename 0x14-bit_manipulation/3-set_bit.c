#include "main.h"
/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @index: the bit index value.
 * @n: pointer to the unsigned integer.
 * Written by Jude Augustine.
 * Return: 1 upon success, and -1 if it fails.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int left_shft;

	if (index > 63)
	{
		return (-1);
	}
	left_shft = 1 << index;
	*n = (*n | left_shft);
	return (1);
}
