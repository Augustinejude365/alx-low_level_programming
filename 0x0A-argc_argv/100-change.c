#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: number of arguments
 * @argv: array of argument
 * Written by Jude Augustine
 * Return: 0 (success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int nm, p, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	nm = atoi(argv[1]);
	result = 0;
	if (nm < 0)
	{
		printf("0\n");
		return (0);
	}
	for (p = 0; p < 5 && nm >= 0; p++)
	{
		while (nm >= coins[p])
		{
			result++;
			nm -= coins[p];
		}
	}
	printf("%d\n", result);
	return (0);
}
