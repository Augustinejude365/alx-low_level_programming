#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet,in lowercase
 * void print_alphabet(void) Print Alphabets in lowercase
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	int j;

	for (j = 97; j <= 122; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
