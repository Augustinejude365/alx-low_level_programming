#include <stdio.h>
#include "main.h"
/**
 * _puts - function that prints a string.
 * @str: - Pointer ro the string
 * Return: string and new line
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
