#include "main.h"
/**
 * main - Entry point
 * Description: 'Print Alphabets in lowercase'
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
