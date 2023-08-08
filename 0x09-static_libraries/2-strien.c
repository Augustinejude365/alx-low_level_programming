#include "main.h"
/**
 * _strien - returns the lenght of a string
 * @s: string
 * JA codes
 * Return: lenght
 */
int _strien(char *s)
{
	int longk = 0;

	while (*s != '\0')
	{
		longk++;
		s++;
	}
	return (longk);
}
