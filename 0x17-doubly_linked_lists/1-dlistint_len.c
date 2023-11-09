#include "lists.h"

/**
 * dlistint_len - A function that returns the number of elements in
 * a double linked list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int kount;

	kount = 0;

	if (h == NULL)
		return (kount);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		kount++;
		h = h->next;
	}

	return (kount);
}
