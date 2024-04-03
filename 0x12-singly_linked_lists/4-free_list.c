#include <stdio.h>
#include "lists.h"

/**
 * free_list - A function that frees a list_t list.
 * @head: Head of the linked list.
 * Written by Jude Augustine.
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
