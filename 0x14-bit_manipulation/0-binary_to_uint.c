#include "main.h"
/**
 * binary_to_uint -a function that converts a binary number to an unsigned int.
 * @b: is the string containing the binary number to be converted.
 * Written by Jude Augustine.
 * Return: Upon success, the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_bin;
	int k;

	if (!b)
		return (0);
	conv_bin = 0;
	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
		{
			return (0);
		}
		conv_bin = 2 * conv_bin + (b[k] - '0');
	}
	return (conv_bin);
}
