#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an
 * unsigned int.
 *  @b: is the string containing the binary number to be converted.
 *  Written by Jude Augustine.
 *  Return: Upon success, the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_bin = 0;

	if (!b)
		return (0);

	for (; *b; b++)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		conv_bin = (conv_bin << 1) | (*b - '0');
	}

	return (conv_bin);
}
