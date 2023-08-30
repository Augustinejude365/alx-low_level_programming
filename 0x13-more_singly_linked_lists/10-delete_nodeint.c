#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node at
 * index index of a listint_t linked list.
 * @index: the index of the particular node to be freed.
 * @head: pointer to the beginning of the linked list.
 * Written by Jude Augustine.
 * Return: 1 if successful. Or -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int k;
	listint_t *temp_Node;
	listint_t *old_Node;

	temp_Node = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (k = 0; k < index - 1 && temp_Node != NULL && index != 0; k++)
		temp_Node = temp_Node->next;
	if (temp_Node == NULL)
		return (-1);
	if (index == 0)
	{
		old_Node = temp_Node->next;
		free(temp_Node);
		*head = old_Node;
	}
	else
	{
		if (temp_Node->next == NULL)
			old_Node = temp_Node->next;
		else
			old_Node = temp_Node->next->next;
		free(temp_Node->next);
		temp_Node->next = old_Node;
	}
	return (1);
}
