#include "main.h"
/**
 * main - Entry point
 * Description: 'Print the alphabet 10 times'
 * Return: Always 0 (Success)
 */
void print_alphabet_×10(void)
{
	int k;
	int l;

	for (k = 1; k <= 10; k++)
	{
		for (l = 97; l <= 122; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
