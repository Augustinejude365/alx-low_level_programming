#include <stdio.h>
#include <string.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - A function that returns the number of elements in a
 * linked list_t list.
 * @h: Pointer to the singly linked list_t list.
 * Written by Augustine Jude.
 * Return: Upon success, number of elements in the linked list_t.
 */
size_t list_len(const list_t *h)
{
	size_t nume = 0;  /*initializes the variable count, "nume" to zero*/

	while (h != NULL)
	{
		nume++;
		h = h->next;
	}
	return (nume);
}
