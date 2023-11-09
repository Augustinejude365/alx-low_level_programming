#include "lists.h"

/**
 * sum_dlistint - A finction that returns the sum of all the data (n)
 * of a doubly linked list
 * @head: head of the list
 * Return: Upon success, the sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_n;

	sum_n = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum_n += head->n;
			head = head->next;
		}
	}

	return (sum_n);
}
