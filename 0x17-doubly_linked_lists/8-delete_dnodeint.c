#include "lists.h"

/**
 * delete_dnodeint_at_index - A function that deletes the node at ind
 * ex of a dlistint_t linked list
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 upon success, or -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head1;
	dlistint_t *head2;
	unsigned int k;

	head1 = *head;

	if (head1 != NULL)
		while (head1->prev != NULL)
			head1 = head1->prev;

	k = 0;

	while (head1 != NULL)
	{
		if (k == index)
		{
			if (k == 0)
			{
				*head = head1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				head2->next = head1->next;

				if (head1->next != NULL)
					head1->next->prev = head2;
			}

			free(head1);
			return (1);
		}
		head2 = head1;
		head1 = head1->next;
		k++;
	}

	return (-1);
}
