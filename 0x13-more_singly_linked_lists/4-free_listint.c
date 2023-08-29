#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list.
 * @head: The pointer to the first node on the linked list.
 * Written by Jude Augustine.
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *temp_Node;

	while ((temp_Node = head) != NULL)
	{
		head = head->next;
		free(temp_Node);
	}
}
