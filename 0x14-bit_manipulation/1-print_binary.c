#include "main.h"
/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: pointer to the unsigned long integer.
 * Written by Jude Augustine.
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	int g, kounter = 0;
	unsigned long int cur_bin;

	for (g = 63; g >= 0; g--)
	{
		cur_bin = n >> g;
		if (cur_bin & 1)
		{
			_putchar('1');
			kounter++;
		}
		else if (kounter)
			_putchar('0');
	}
	if (!kounter)
		_putchar('0');
}
