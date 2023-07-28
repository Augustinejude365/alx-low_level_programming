#include "main.h"
#include <stdio.h>
/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 * Return: *s
 */
char *rot13(char *s)
{
	int l;
	int k;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (k = 0; s[k] != '\0'; k++)
	{
	for (l = 0; l < 52; l++)
	{
	if (s[k] == data1[l])
	{
	s[k] = datarot[l];
	break;
	}
	}
	}
	return (s);
}
