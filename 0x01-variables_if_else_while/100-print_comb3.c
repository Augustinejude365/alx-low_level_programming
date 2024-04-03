#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print all possible different combination of two digits'
 * Return: Always 0
 */
int main(void)
{
	int n, m;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (n < m)
			{
				putchar(n);
				putchar(m);
				if (n == 56 && m == 57)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
