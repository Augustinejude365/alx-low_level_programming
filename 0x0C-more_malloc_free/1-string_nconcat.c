#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - a function that concatenates two strings.
 * @s1: string to append to.
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * JA codes
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int j = 0, k = 0, ln1 = 0, ln2 = 0;

	while (s1 && s1[ln1])
		ln1++;
	while (s2 && s2[ln2])
		ln2++;

	if (n < ln2)
		s = malloc(sizeof(char) * (ln1 + n + 1));
	if (!s)
		return (NULL);
	while (j < ln1)
	{
		s[j] = s1[j];
		j++;
	}
	while (n < ln2 && j < (ln1 + n))
		s[j++] = s2[k++];
	while (n >= ln2 && j < (ln1 + ln2))
		s[j++] = s2[k++];
	s[j] = '\0';
	return (s);
}
