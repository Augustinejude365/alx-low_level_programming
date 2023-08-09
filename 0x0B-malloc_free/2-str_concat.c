#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: input ont to concat
 * @s2: input two to concat
 * JA codes
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *konct;

	int x, yx;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = yx = 0;

	while (s1[x] != '\0')
		x++;
	while (s2[yx] != '\0')
		yx++;
	konct = malloc(sizeof(char) * (x + yx + 1));

	if (konct == NULL)
		return (NULL);
	x = yx = 0;

	while (s1[x] != '\0')
	{
		konct[x] = s1[x];
		x++;
	}
	while (s2[yx] != '\0')
	{
		konct[x] = s2[yx];
		x++, yx++;
	}
	konct[x] = '\0';
	return (konct);
}
