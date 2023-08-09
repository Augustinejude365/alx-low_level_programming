#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a
 * parameter.
 * @str: char
 * JA codes
 * Return: 0
 */
char *_strdup(char *str)
{
	char *zoe;

	int i, r = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	zoe = malloc(sizeof(char) * (i + 1));

	if (zoe == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		zoe[r] = str[r];
	return (zoe);
}
