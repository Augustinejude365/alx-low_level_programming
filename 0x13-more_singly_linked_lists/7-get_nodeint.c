#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node of a
 * listint_t linked list.
 * @index: the position of the node to be retrived.
 * @head: head pointer to the first element of the linked list.
 * Written by Jude Augustine.
 * Return: pointer to the retrieved node, nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;

	for (k = 0; k < index; k++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
