#include "main.h"
/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @m: Second number to be flipped.
 * @n: first number to be flipped.
 * Written by Jude Augustine.
 * Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num_bits;
	unsigned long int kounter;

	kounter = n ^ m;
	for (num_bits = 0; kounter > 0;)
	{
		if ((kounter & 1) == 1)
			num_bits++;
		kounter = kounter >> 1;
	}
	return (num_bits);
}
