#include <stdio.h>
#include "main.h"

/**
 * main -  prints its name of the program , followed by a new line.
 * @argc: number of arguments
 * @argv: array of arguments
 * Written by Augustine Jude
 * Return: 0 Always (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
