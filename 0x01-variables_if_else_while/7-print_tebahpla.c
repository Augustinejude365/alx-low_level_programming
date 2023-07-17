#include <stdio.h>
/**
 * main - Entey point
 * Description: 'Print alphabets in reverse order'
 * Return: Always 0
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar ('\n');
	return (0);
}
