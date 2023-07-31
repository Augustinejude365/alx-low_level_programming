
#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: 0 Always (uppon success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int h = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				h++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (h);
		}
		s++;
	}
	return (h);
}
