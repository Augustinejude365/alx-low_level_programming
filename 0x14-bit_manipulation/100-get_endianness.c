#include "main.h"

/**
 * get_endianness - A function that checks the endianness of the system.
 * Written by Jude Augustine.
 * Return: 0 if big endian, and 1 if little endian.
 */
int get_endianness(void)
{
	int big_lit_endian;
	int j;

	big_lit_endian = (int)(((char *)&j)[0]);

	return (big_lit_endian);
}
