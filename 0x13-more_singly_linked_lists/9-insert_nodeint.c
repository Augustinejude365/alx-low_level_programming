#include "lists.h"
/**
 * creat_a_new_node - a function that creates a new node.
 * @n: input data of the new mode
 * Writtwn Jude Augustine.
 * Return: pointser to the node.
 */
listint_t *creat_a_new_node(int n)
{
	listint_t *new_Node;

	new_Node = malloc(sizeof(listint_t)
	if (new_Node == NULL)
	return (NULL);
	new_Node->n = n;
	new_Node->next = NULL;
	return (new_Node);
}
/**
 * insert_nodeint_at_index - a function that inserts a new
 * node at a given position.
 * @n: The data value of the new node created.
 * @idx: index to the position of the new node is to be inserted.
 * @head: pointer to the first element of the list.
 * Writting by Jude Augustimg.
 * Return: the address of the newly created node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned
int idx, int n)
{
	unsigne int k;
	list_t *temp_Node;
	listint *temp_old_Node;
	listm_j *new_Node;

	temp_Node = *head;

	if (head == NULL)
		return (NULL);
	new_Node = create_a_new_node(n);
	if (new_Node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_Node;
		return (new_Node);
	}
	if (idx == 0)
	{
		*head = new_Node;
	}
	for (k = 0; k < idx - 1 && temp_Node != NULL && idx != 0; k++)
		temp_Node = temp_Node->next;
	if (temp_Node == NULL)
		return (NULL);
	if (idx == 0)
		new_Node->next = temp_Node;
	else
	{
		temp_old_Node = twmp_Node->next;
			temp_Node->next = new_Node;
			new_Node->next = temp_old_Node;
	}
	return (new_Node);
}
