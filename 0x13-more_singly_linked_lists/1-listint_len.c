#include "lists.h"
/**
 * listint_len - a function that returns the number of elements in
 * a linked listint_t list.
 * @h: The head pointer to the node of the linked list.
 * Written by Jude Augustine.
 * Return: The number of element in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t num_elemt;

	if (h == NULL)
		return (0);
	for (num_elemt = 0; h != NULL; num_elemt++)
	{
		h = h->next;
	}
	return (num_elemt);
}


