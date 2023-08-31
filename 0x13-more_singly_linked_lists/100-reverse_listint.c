#include "lists.h"
/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: pointer to the head of the linked list.
 * Written ny Jude Augustine.
 * Return: A pointer to the first element of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp_Node;
	listint_t *old_Node;

	if (head == NULL || *head == NULL)
		return (NULL);
	temp_Node = *head;
	*head = temp_Node->next;
	temp_Node->next = NULL;
	while (*head != NULL)
	{
		old_Node = (*head)->next;
		(*head)->next = temp_Node;
		temp_Node = *head;
		if (old_Node == NULL)
			return (*head);
		*head = old_Node;
	}
	if (*head == NULL)
	{
		*head = temp_Node;
	return (*head);
	}
	return (NULL);
}
