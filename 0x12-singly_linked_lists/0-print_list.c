#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - This is a function that prints all the elements of
 * a list_t list.
 * @h: A pointer to the singly linked list.
 * Written by Jude Augustine.
 * Return: Upon success, the number of printed nodes.
 */
size_t print_list(const list_t *h)
{
	size_t kn = 0;  /* kn is the num of nodes to be returned**/

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%ld] (nil)\n", kn);
		}
		else
		{
			printf("[%ld] %s\n", kn, h->str);
		}
		h = h->next;
		kn++;
	}
	return (kn);
}
