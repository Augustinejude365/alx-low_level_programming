#include <stdio.h>
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
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
