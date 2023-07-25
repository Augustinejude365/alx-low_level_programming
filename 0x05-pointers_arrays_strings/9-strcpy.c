#include "main.h"
/**
 * *_strcpy - Copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by pointer 'src' to the
 * buffer pointed to by 'dest'
 * Return: pointed to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
	l++;
	}
	for ( ; x < l ; x++)
	{
	dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
