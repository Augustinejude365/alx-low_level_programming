#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node -A function that adds a new node at the beginning of a list_t list.
 * @str: String to store the linked list.
 * @head: Pointer to the head of the linked list list_t list.
 * Written by Jude Augustine.
 * Return: On success, return the address of the new element.
 * And NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_Node;
	size_t k = 0;

	new_Node = malloc(sizeof(list_t));
	if (new_Node == NULL)
	{
		free(new_Node);
		return (NULL);
	}
	new_Node->str = strdup(str);
	while (str[k] != '\0')
	{
		k++;
	}
	new_Node->len = k;
	if (*head != NULL)
		new_Node->next = *head;
	if (*head == NULL)
		new_Node->next = NULL;
	*head = new_Node;
	return (*head);
}

