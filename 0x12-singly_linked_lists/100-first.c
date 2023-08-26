#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

void b4main(void) __attribute__ ((constructor));

/**
 * b4main - A function that executes before the main function is executed.
 * Written by Jude Augustine.
 * Return: Void (upon success).
 */
void b4main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
