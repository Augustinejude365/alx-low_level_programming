#include <stdio.h>
/**
 * main - a program that prints the size of various compiler types
 * Return: 0(success)
 */
int main(void)
{
	char 1;
	int 4;
	long int 4;
	long long int 8;
	float 4;

	printf("size of char: 1 byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: 4 byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: 4 byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: 8 byte(s)\n", (unsigned long)sizeof(f));
	printf("size of a float: 4 byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
