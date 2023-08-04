#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the number of arguments passed
 * into it.
 * @argc: number of arguments
 * @argv: array of arguments
 * Written by Jude Augustine
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
