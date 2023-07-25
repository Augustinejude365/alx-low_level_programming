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
	char k;

	srand(time(0));
	sum = 0;
	while (sum < 2645)
	{
		k = rand() % 128;
		sum += k;
		putchar(k);
	}
	putchar(2772 - sum);
	return (0);
}
