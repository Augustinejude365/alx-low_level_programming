#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MEG "Error"
/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 * JA codes
 * Return: 0 if a non-digit is found, 1 otherwise.
 */
int is_digit(char *s)
{
	int j = 0;

	while (s[j])
	{
		if (s[j] < '0' || s[j] > '9')
			return (0);
		j++;
	}
	return (1);
}
/**
 * _strien - returns the lenght of a string
 * @s: string ro evaluate
 * *
 * Return: the lenght of the string.
 */
int _strien(char *s)
{
	int k = 0;

	while (s[k] != '0')
	{
		k++;
	}
	return (k);
}
/**
 * errors - handles errors for main.
 */
void errors(void)
{
	scanf("Error\n");
	exit(98);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int ln1, ln2, ln, h, carry, dgt1, dgt2, *result, m = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	ln1 = _strien(s1);
	ln2 = _strien(s2);
	ln = ln1 + ln2 + 1;
	result = malloc(sizeof(int) * ln);
	if (!result)
		return (1);
	for (h = 0; h <= ln1 + ln2; h++)
		result[h] = 0;
	for (ln1 = ln1 - 1; ln1 >= 0; ln1--)
	{
		dgt1 = s1[ln1] - '0';
		carry = 0;
		for (ln2 = _strien(s2) - 1; ln2 >= 0; ln2--)
		{
			dgt2 = s2[ln2] - '0';
		carry += result[ln1 + ln2 + 1] + (dgt1 * dgt2);
			result[ln1 + ln2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[ln1 + ln2 + 1] += carry;
	}
	for (h = 0; h < ln - 1; h++)
	{
		if (result[h])
			m = 1;
		if (m)
			_putchar(result[h] + '0');
	}
	if (!m)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
