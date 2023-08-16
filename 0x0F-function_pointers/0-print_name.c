#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - a function that prints a name using pointer to the function.
 * @name: string to be added.
 * @f: Pointer to the function.
 * JA codes.
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
