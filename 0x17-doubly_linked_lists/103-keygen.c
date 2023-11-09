#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - A function that generates a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int j, k;
	size_t len, add;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	p[0] = l[(len ^ 59) & 63];
	for (j = 0, add = 0; j < len; j++)
		add += argv[1][j];
	p[1] = l[(add ^ 79) & 63];
	for (j = 0, k = 1; j < len; j++)
		k *= argv[1][j];
	p[2] = l[(k ^ 85) & 63];
	for (k = argv[1][0], j = 0; j < len; j++)
		if ((char)k <= argv[1][j])
			k = argv[1][j];
	srand(k ^ 14);
	p[3] = l[rand() & 63];
	for (k = 0, j = 0; j < len; j++)
		k += argv[1][j] * argv[1][j];
	p[4] = l[(k ^ 239) & 63];
	for (k = 0, j = 0; (char)j < argv[1][0]; j++)
		k = rand();
	p[5] = l[(k ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
