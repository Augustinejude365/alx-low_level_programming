#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function that multiplies 2 numbers passed to main, or Error
 * Written by Augustine Jude
 * @argc: argument counter
 * @argv: argument vector
 * Return: 1 if error, 0 if function runs correctly
 */
int main(int argc, char *argv[])
{
	(void) argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
