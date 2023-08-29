#include "lists.h"
/**
 * sum_listint - a function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer to the list of linked list.
 * Written by Jude Augustine.
 * Return: sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum_data = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum_data += head->n;
		head = head->next;

	}
	return (sum_data);
}
