#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: pointer to the unsigned long integer.
 * Written by Jude Augustine.
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	int kounter = 0;
	int shift = 63; /* Start with the most significant bit*/

	while (shift >= 0)
	{
		char bit = (n >> shift) & 1; /* Extract the current bit*/

		if (bit || kounter)
		{
			_putchar(bit ? '1' : '0'); /* Print '1' if bit is set, '0' otherwise*/
			kounter++;
		}
		shift--;
	}

	if (!kounter)
		_putchar('0');
}
