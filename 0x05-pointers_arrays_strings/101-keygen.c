#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point - Generates random passwords dor 101 crackme
 * Return: Always 0 (upon success)
 */
int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
