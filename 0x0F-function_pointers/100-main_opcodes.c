#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the opcodes of its own main function
 * @argc: number of arguments.
 * @argv: arrays of arguments.
 * JA codes.
 * Return: Alwayss 0 (success).
 */
int main(int argc, char *argv[])
{
	int bytes, k;
	char *ary;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ary = (char *)main;

	for (k = 0; k < bytes; k++)
	{
		if (k == bytes - 1)
		{
			printf("%02hhx\n", ary[k]);
			break;
		}
		printf("%02hhx ", ary[k]);
	}
	return (0);
}
