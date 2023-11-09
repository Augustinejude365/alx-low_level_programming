#include "lists.h"

/**
 * print_dlistint -A function that prints all the elements of a dlistint_t list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int n_nodes;

	n_nodes = 0;

	if (h == NULL)
		return (n_nodes);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n_nodes++;
		h = h->next;
	}

	return (n_nodes);
}
