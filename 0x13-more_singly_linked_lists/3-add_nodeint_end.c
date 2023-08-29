#include "lists.h"
/**
 * add_nodeint_end - a function that adds a new node at the end of
 * a listint_t list.
 * @n: integer input to the list.
 * @head: head of the linked list pointer.
 * Written by Jude Augistine.
 * Return: the address of the new element, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_Node;
	listint_t *temp_Node;

	(void)temp_Node;

	new_Node = malloc(sizeof(listint_t));
	if (new_Node == NULL)
		return (NULL);
	new_Node->n = n;
	new_Node->next = NULL;
	temp_Node = *head;
	if (*head == NULL)
	{
		*head = new_Node;
	}
	else
	{
		while (temp_Node->next != NULL)
		{
			temp_Node = temp_Node->next;
		}
		temp_Node->next = new_Node;
	}
	return (new_Node);
}
