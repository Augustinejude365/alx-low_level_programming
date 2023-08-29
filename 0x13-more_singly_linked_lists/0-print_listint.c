#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint - a finction that prints all the int data in a
 * singly linked list listint_t.
 * @h: the head pointer to the linked list.
 * Written by Jude Augustine.
 * Return: Upon success, the number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t num_Nodes;

	if (h == NULL)
		return (0);
	for (num_Nodes = 0; h != NULL; num_Nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num_Nodes);
}
