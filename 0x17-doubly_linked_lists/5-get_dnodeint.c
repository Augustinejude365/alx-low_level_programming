#include "lists.h"

/**
 * get_dnodeint_at_index - A function that returns the nth node of a
 * dlistint_t linked list.
 * @head: pointer to head of the list
 * @index: index of the node being searched for, starting from 0
 * Return: nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size_g;
	dlistint_t *temp;

	size_g = 0;
	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp)
	{
		if (index == size_g)
			return (temp);
		size_g++;
		temp = temp->next;
	}
	return (NULL);
}
