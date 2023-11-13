#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: string
 * JA codes
 * Return: lenght
 */
int _strlen(char *s)
{
	int longk = 0;
	while (*s != '\0')
	{
		longk++;
		s++;
	}
	return (longk);
}
