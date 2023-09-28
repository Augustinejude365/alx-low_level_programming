#include "main.h"

/**
 * flip_bits - Calculate the number of bits needed to flip from one
 * number to another.
 * @n: First number.
 * @m: Second number.
 * Return: Number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int num_bits = 0;

	while (xor_result > 0)
	{
		num_bits += xor_result & 1;
		xor_result >>= 1;
	}

	return (num_bits);
}
