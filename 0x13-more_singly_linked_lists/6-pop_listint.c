#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: head the pointer to the linked list.
 * Written by Jude Augustine.
 * Return: the head node’s data (n).
 * Or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp_Node;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	temp_Node = *head;
	*head = (*head)->next;
	free(temp_Node);
	return (n);
}
