#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list of nodes
 * and set the head to NULL.
 * @head: pointer to the first element of the linked list.
 * Written by Jude Augustine.
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_Node;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		temp_Node = (*head)->next;
		free(*head);
		*head = temp_Node;
	}
	free(*head);
	*head = NULL;
}
