#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @index: index of the bit under consideration.
 * @n: pointer to an unsigned integer.
 * Written by Jude Augustine.
 * Return: value of the bit at index if successful.
 * Otherwise return -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit_val;

	if (index > 63)
	{
		return (-1);
	}
	bit_val = (n >> index) & 1;
	return (bit_val);
}
