#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - A function that adds a new node at the end of a list_t list.
 * @str: String to store in the list
 * @head: Pointer to the head of the linked list.
 * Written by Jude Augustine.
 * Return: the address of the new element, or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_Node, *new_Node_end;
	size_t k;

	new_Node = malloc(sizeof(list_t));
	if (new_Node == NULL)
		return (NULL);
	new_Node->str = strdup(str);
	for (k = 0; str[k]; k++)
		;
	new_Node->len = k;
	new_Node->next = NULL;
	new_Node_end = *head;

	if (new_Node_end == NULL)
	{
		*head = new_Node;
	}
	else
	{
		while (new_Node_end->next != NULL)
			new_Node_end = new_Node_end->next;
		new_Node_end->next = new_Node;
	}
	return (*head);
}


