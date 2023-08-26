#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - A function that frees a list_t list.
 * @head: Head of the linked list.
 * Written by Jude Augustine.
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *new_Node_end;

	new_Node_end = head;

	while ((new_Node_end = head) != NULL)
	{
	free(new_Node_end->str);
	free(new_Node_end);
	new_Node_end = new_Node_end->next;
	}
}
