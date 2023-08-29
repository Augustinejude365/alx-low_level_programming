#include "lists.h"
/**
 * add_nodeint - a function that adds a new node at the beginning
 * of a listint_t list.
 * @n: new inter to be inputed.
 * @head: head pointer to the head of the list.
 * Written by Jude Augustine.
 * Return: the address of the new element,
 * or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_Node;

	if (head == NULL)
		return (NULL);
	new_Node = malloc(sizeof(listint_t));
	if (new_Node == NULL)
		return (NULL);
	if (*head == NULL)
		new_Node->next = NULL;
	else
		new_Node->next = *head;
	new_Node->n = n;
	*head = new_Node;
	return (*head);
}
