#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the unsigned integer.
 * @index: The bit index value (0 to 63).
 * Written by Jude Augustine.
 * Return: 1 upon success, -1 if it fails.
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
